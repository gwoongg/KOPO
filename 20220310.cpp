#include<stdio.h>
int main()
{
    int linuxScore, javaScore, cScore;
    char subject[20], subject1[20], subject2[20], subject3[20];
    FILE *fp;
    fp = fopen("input.csv", "r");
    printf("%s\t%s\t%s\n", subject1, subject2, subject3);
    while(fscanf(fp, "%d,%d,%d", &linuxScore, &javaScore, &cScore) != -1) 
    {
    printf("%d\t%d\t%d\n", linuxScore, javaScore, cScore);
    }
    fclose(fp);

	return 0;

}
