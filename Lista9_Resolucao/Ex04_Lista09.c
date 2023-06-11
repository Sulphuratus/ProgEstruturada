#include<stdio.h>
#include<stdlib.h>
#include<time.h>>

int main()
{
    srand(time(NULL));
    int i, j;
    int n;
    FILE *arquivo;
    arquivo = fopen("zero.pbm", "w");
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "10 7\n");
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i == 0 && j == 3)
            {
                //if(i == 9 || i == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 1 && j == 2) || i == 1 && j == 4)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 2 && j == 1) || i == 2 && j == 5)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 3 && j == 1) || i == 3 && j == 5)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 4 && j == 1) || i == 4 && j == 5)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 5 && j == 2) || i == 5 && j == 4)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if(i == 6 && j == 3)
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }

            else
            {
                fprintf(arquivo, "%d ", 0);
            }
        }
    }
    arquivo = fopen("um.pbm", "w");
    fprintf(arquivo, "P1\n");
    fprintf(arquivo, "#Criado por Joao\n");
    fprintf(arquivo, "10 7\n");
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if((i == 0 && j == 4))
            {
                //if(i == 9 || i == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 1 && j == 3) || (i == 1 && j == 4))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 2 && j == 4))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 3 && j == 4))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 4 && j == 4))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 5 && j == 4))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }
            else if((i == 6 && j == 3 )|| (i == 6 && j == 4) || (i == 6 && j == 5))
            {
                //}else if(j == 9 || j == 89){
                fprintf(arquivo, "%d ", 1);
            }

            else
            {
                fprintf(arquivo, "%d ", 0);
            }
        }
    }
    fclose(arquivo);
    return 0;

}
