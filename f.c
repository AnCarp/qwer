void print_trangle(int a, char c)
{
    int i,j,k,z;
    for (i = 2; i <= a; i++)
   { for(j=2;j<=a-i;j++)
      printf(" ");
      for(k=1,z=0;k<=2*i-1;k++,z++)
      printf("%c",c+z);
      putchar('\n');
   }

}