#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part
{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int main(int argc, char *argv[])
{
    FILE *input1, *input2, *output;
    int num_read1, num_read2;
    struct part part1, part2;

    if(argc!=4)
    {
        printf("Usage: merge_inventory infile1 infile2 outfile\n");
        exit(EXIT_FAILURE);
    }

    if((input1=fopen(argv[1], "rb"))==NULL)
    {
        printf("ERROR: Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((input2=fopen(argv[2], "rb"))==NULL)
    {
        printf("ERROR: Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    if((output=fopen(argv[3], "wb"))==NULL)
    {
        printf("ERROR: Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    num_read1 = fread(&part1, sizeof(struct part), 1, input1);
    num_read2 = fread(&part2, sizeof(struct part), 1, input2);
    while (num_read1 == 1 && num_read2 == 1)
    /* successfully read records from both files */
    if (part1.number < part2.number)
    {
        fwrite(&part1, sizeof(struct part), 1, output);
        num_read1 = fread(&part1, sizeof(struct part), 1, input1);
    }
    else if (part1.number > part2.number)
    {
        fwrite(&part2, sizeof(struct part), 1, output);
        num_read2 = fread(&part2, sizeof(struct part), 1, input2);
    }
    else
    { /* part numbers are equal */
        if (strcmp(part1.name, part2.name) != 0)
        fprintf(stderr,
            "Names don't match for part %d; using the name %s and %s\n",
            part1.number, part1.name, part2.name);
        else {part1.on_hand += part2.on_hand;
        fwrite(&part1, sizeof(struct part), 1, output);}
        num_read1 = fread(&part1, sizeof(struct part), 1, input1);
        num_read2 = fread(&part2, sizeof(struct part), 1, input2);
    }

      /* copy rest of file1 to output file */
      while (num_read1 == 1) {
        fwrite(&part1, sizeof(struct part), 1, output);
        num_read1 = fread(&part1, sizeof(struct part), 1, input1);
      }

      /* copy rest of file2 to output file */
      while (num_read2 == 1) {
        fwrite(&part2, sizeof(struct part), 1, output);
        num_read2 = fread(&part2, sizeof(struct part), 1, input2);
      }

      fclose(input1);
      fclose(input2);
      fclose(output);
      return 0;
}
