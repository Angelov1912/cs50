#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while(end < start);

    int years = 0;

    // TODO: Calculate number of years until we reach threshold
    while(start < end)
    {
        int born = start / 3;
        int passed_away = start / 4;

        start += (born - passed_away);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %.0d\n", years);

}
