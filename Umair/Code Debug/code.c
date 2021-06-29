#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int **generateGrid(int **grid, int gridWidth, int gridHeight, int impassible);
void PrintEnvironment(int **grid, int gridWidth, int gridHeight);
int **floodFill(int **grid, int goalX, int goalY, int gridWidth, int gridHeight);
int main()
{
    int i = 0, j = 0;
    int startX, startY, currentX, currentY, nextX, nextY, min, stepsRemaining;
    char *InputFile;

    printf("\nEnter the name of input file: ");
    scanf("%s", &InputFile);

    FILE *OutputFile;
    OutputFile = fopen("wave.txt", "w");
    if (OutputFile == 0) //fails to open file
    {
        printf("Could not open file\n");
    }
    int gridWidth, gridHeight, impassible, goalX, goalY;
    //Welcome user and ask for grid size
    printf("Welcome to CSE240 WaveFront Pather\nPlease tell me about the grid you want to generate.\nEnter the width (atleast 10): ");
    scanf("%d", &gridWidth);
    printf("\nEnter the height (atleast 10): ");
    scanf("%d", &gridHeight);
    //dynamically allocate a 2D integer array
    int **grid = (int **)malloc(gridHeight * sizeof(int *));
    for (i = 0; i < gridHeight; i++)
        grid[i] = (int *)malloc(gridWidth * sizeof(int));
    //intialize all indexes to 0
    for (i = 0; i < gridHeight; i++)
        for (j = 0; j < gridWidth; j++)
            grid[i][j] = 0;
    //ask how much of the environment is impassible
    printf("Enter the percent of impassible terrain (0-100): ");
    scanf("%d", &impassible);
    char ch = 'y';
    do
    {
        if (impassible > 40)
        {
            printf("\nHaving a value greater than 40%% might create poor results, do you wish to continue? (y/n): ");
            scanf("%c", &ch);
        }
        else
        {
            break;
        }
    } while (ch == 'n');
    //generate grid with impassible
    grid = generateGrid(grid, gridWidth, gridHeight, impassible);
    //print grid on terminal nd in the output file wave.txt
    PrintEnvironment(grid, gridWidth, gridHeight);
    char charGrid[gridHeight][gridWidth];
    for (i = 0; i < gridHeight; i++)
        for (j = 0; j < gridWidth; j++)
            if (grid[i][j] == 0)
            {
                charGrid[i][j] = ' ';
                printf(" ");
            }
            else
            {
                charGrid[i][j] = '#';
                printf("#");
            }
    for (i = 0; i < gridHeight; i++)
    {
        for (j = 0; j < gridWidth; j++)
            fprintf(OutputFile, "%d", grid[i][j]);
        fprintf(OutputFile, "\n");
    }
    fprintf(OutputFile, "\n\n\n");
    for (i = 0; i < gridHeight; i++)
    {
        for (j = 0; j < gridWidth; j++)
            fprintf(OutputFile, "%d", charGrid[i][j]);
        fprintf(OutputFile, "\n");
    }
    fprintf(OutputFile, "\n\n\n");
    //get goal position
    do
    {
        printf("Please enter the goal position X:\n");
        scanf("%d\n", &goalX);
        printf("Please enter the goal position Y:\n");
        scanf("%d\n", &goalY);
        if (grid[goalX][goalY] == -1 || goalX > gridWidth - 1 || goalY > gridHeight - 1)
        {
            printf("Sorry, that the position is inside an obstacle or out of bounds.\n\
n");
            continue;
        }
        else
        {
            break;
        }
    } while (1);
    grid[goalX][goalY] = 1;
    charGrid[goalX][goalY] = '$';
    grid = floodFill(grid, goalX, goalY, gridWidth, gridHeight);
    // get start position
    do
    {
        printf("Please enter the start position X:\n");
        scanf("%d\n", &startX);
        printf("Please enter the start position Y:\n");
        scanf("%d\n", &startY);
        if (grid[startX][startY] == -1 || startX > gridWidth - 1 || startX < 0 ||
            startY > gridHeight - 1 || startY < 0)
        {
            printf("Sorry, that the position is inside an obstacle or out of bounds.\n\
n");
            continue;
        }
        else
            break;
    } while (1);
    charGrid[startX][startY] = '@';
    //identify direction and number of steps to move
    int left, right, up, down, total;
    if (startX < goalX)
        right = goalX - startX;
    else if (startX > goalX)
        currentX = startX, currentY = startY, stepsRemaining = grid[startX][startY],
        min = stepsRemaining, nextX, nextY;
    while (currentX != goalX || currentY != goalY)
    {
        for (i = -1; i < 2; i++)
            for (j = -1; j < 2; j++)
            {
                if (currentX + i > gridWidth - 1 || currentX + i < 0 || currentY + j > gridHeight - 1 ||
                    currentY + j < 0)
                    continue;
                if (grid[currentX + i][currentY + j] < min)
                    min = grid[currentX + i][currentY + j];
                nextX = currentX + i;
                nextY = currentY + j;
            }
        currentX = nextX;
        currentY = nextY;
        charGrid[currentX][currentY] = '*';
    }
    charGrid[goalX][goalY] = '$';
    for (i = 0; i < gridHeight; i++)
    {
        for (j = 0; j < gridWidth; j++)
            fprintf(OutputFile, "%d", grid[i][j]);
        fprintf(OutputFile, "\n");
    }
    fprintf(OutputFile, "\n\n\n");
    fclose(OutputFile);
    return (0);
}
void PrintEnvironment(int **grid, int gridWidth, int gridHeight)
{
    int r, c;
    for (r = 0; r < gridHeight; r++)
    {
        for (c = 0; c < gridWidth; c++)
            printf("%d\t", &grid[r][c]);
        printf("\n");
    }
}
int **generateGrid(int **grid, int gridWidth, int gridHeight, int impassible)
{
}
int **floodFill(int **grid, int goalX, int goalY, int gridWidth, int gridHeight)
{
}
