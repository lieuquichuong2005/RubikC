#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintfColor(char string[]);

int main()
{
  char R[10] = "rrrrrrrrr";
  char Y[10] = "yyyyyyyyy";
  char W[10] = "wwwwwwwww";
  char B[10] = "bbbbbbbbb";
  char G[10] = "ggggggggg";
  char O[10] = "rrrrrrrrr";
  for (short i = 1; i < 10; i++)
  {
    printf("R[%hd]: r      ", i);
    printf("Y[%hd]: y      ", i);
    printf("W[%hd]: w      ", i);
    printf("B[%hd]: b      ", i);
    printf("G[%hd]: g      ", i);
    printf("O[%hd]: o      ", i);
    printf("\n");
  }
  char t[3];
  int temp1, temp2, temp3, ex1, ex2;
  do
  {
    printf("cac toan tu xoay: \n");
    printf("r: xoay ben phai theo chieu kim dong ho.        ri: xoay ben phai nguoc chieu kim dong ho\n");
    printf("l: xoay ben trai theo chieu kim dong ho.        li: xoay ben trai nguoc chieu kim dong ho.\n");
    printf("u: xoay ben tren theo chieu kim dong ho.        ui: xoay ben tren nguoc chieu kim dong ho.\n");
    printf("d: xoay ben duoi theo chieu kim dong ho.        di: xoay ben duoi nguoc chieu kim dong ho.\n");
    printf("f: xoay dang truoc theo chieu kim dong ho.      fi: xoay dang truoc nguoc chieu kim dong ho.\n");
    printf("b: xoay dang sau theo chieu kim dong ho.        bi: xoay dang sau nguoc chieu kim dong ho.\n");
    printf("in: in ra mat rubik tuy chon.                   oo: thoat khoi chuong trinh.\n");
    printf("===>>>nhap toan tu xoay: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0';
    fflush(stdin);
    if (strcmp(t, "r") == 0)
    {
      temp1 = R[2];
      temp2 = R[5];
      temp3 = R[8];

      R[8] = Y[8];
      R[5] = Y[5];
      R[2] = Y[2];

      Y[8] = O[8];
      Y[5] = O[5];
      Y[2] = O[2];

      O[8] = W[8];
      O[5] = W[5];
      O[2] = W[2];

      W[8] = temp3;
      W[5] = temp2;
      W[2] = temp1;

      ex1 = B[0];
      ex2 = B[1];

      B[0] = B[6];
      B[1] = B[3];
      B[6] = B[8];
      B[3] = B[7];
      B[8] = B[2];
      B[7] = B[5];
      B[5] = ex2;
      B[2] = ex1;
    }
    else if (strcmp(t, "ri") == 0)
    {
      temp1 = R[2];
      temp2 = R[5];
      temp3 = R[8];

      R[8] = W[8];
      R[5] = W[5];
      R[2] = W[2];

      W[8] = O[8];
      W[5] = O[5];
      W[2] = O[2];

      O[8] = Y[8];
      O[5] = Y[5];
      O[2] = Y[2];

      Y[8] = temp3;
      Y[5] = temp2;
      Y[2] = temp1;

      ex1 = B[0];
      ex2 = B[1];

      B[0] = B[2];
      B[1] = B[5];
      B[2] = B[8];
      B[5] = B[7];
      B[8] = B[6];
      B[7] = B[3];
      B[6] = ex1;
      B[3] = ex2;
    }
    else if (strcmp(t, "l") == 0)
    {
      temp1 = R[0];
      temp2 = R[3];
      temp3 = R[6];

      R[0] = W[0];
      R[3] = W[3];
      R[6] = W[6];

      W[0] = O[0];
      W[3] = O[3];
      W[6] = O[6];

      O[0] = Y[0];
      O[3] = Y[3];
      O[6] = Y[6];

      Y[0] = temp1;
      Y[3] = temp2;
      Y[6] = temp3;

      ex1 = G[0];
      ex2 = G[1];

      G[1] = G[3];
      G[0] = G[6];
      G[6] = G[8];
      G[3] = G[7];
      G[8] = G[2];
      G[7] = G[5];
      G[5] = ex2;
      G[2] = ex1;
    }
    else if (strcmp(t, "li") == 0)
    {
      temp1 = R[0];
      temp2 = R[3];
      temp3 = R[6];

      R[0] = Y[0];
      R[3] = Y[3];
      R[6] = Y[6];

      Y[0] = O[0];
      Y[3] = O[3];
      Y[6] = O[6];

      O[0] = W[0];
      O[3] = W[3];
      O[6] = W[6];

      W[0] = temp1;
      W[3] = temp2;
      W[6] = temp3;

      ex1 = B[0];
      ex2 = B[1];

      G[0] = G[2];
      G[1] = G[5];
      G[2] = G[8];
      G[5] = G[7];
      G[8] = G[6];
      G[7] = G[3];
      G[6] = ex1;
      G[3] = ex2;
    }
    else if (strcmp(t, "u") == 0)
    {
      temp1 = R[0];
      temp2 = R[1];
      temp3 = R[2];

      R[0] = B[0];
      R[1] = B[1];
      R[2] = B[2];

      B[0] = O[0];
      B[1] = O[1];
      B[2] = O[2];

      O[0] = G[0];
      O[1] = G[1];
      O[2] = G[2];

      G[0] = temp1;
      G[1] = temp2;
      G[2] = temp3;

      ex1 = W[0];
      ex2 = W[1];

      W[0] = W[6];
      W[1] = W[3];
      W[6] = W[8];
      W[3] = W[7];
      W[8] = W[2];
      W[7] = W[5];
      W[5] = ex2;
      W[2] = ex1;
    }
    else if (strcmp(t, "ui") == 0)
    {
      temp1 = R[0];
      temp2 = R[1];
      temp3 = R[2];

      R[0] = G[0];
      R[1] = G[1];
      R[2] = G[2];

      G[0] = O[0];
      G[1] = O[1];
      G[2] = O[2];

      O[0] = B[0];
      O[1] = B[1];
      O[2] = B[2];

      B[0] = temp1;
      B[3] = temp2;
      B[6] = temp3;

      ex1 = W[0];
      ex2 = W[1];

      W[0] = W[2];
      W[1] = W[5];
      W[2] = W[8];
      W[5] = W[7];
      W[8] = W[6];
      W[7] = W[3];
      W[6] = ex1;
      W[3] = ex2;
    }
    else if (strcmp(t, "d") == 0)
    {
      temp1 = R[6];
      temp2 = R[7];
      temp3 = R[8];

      R[6] = G[6];
      R[7] = G[7];
      R[8] = G[8];

      G[6] = O[6];
      G[7] = O[7];
      G[8] = O[8];

      O[6] = B[6];
      O[7] = B[7];
      O[8] = B[8];

      B[6] = temp1;
      B[7] = temp2;
      B[8] = temp3;

      ex1 = Y[0];
      ex2 = Y[1];

      Y[0] = Y[6];
      Y[1] = Y[3];
      Y[6] = Y[8];
      Y[3] = Y[7];
      Y[8] = Y[2];
      Y[7] = Y[5];
      Y[5] = ex2;
      Y[2] = ex1;
    }
    else if (strcmp(t, "di") == 0)
    {
      temp1 = R[6];
      temp2 = R[7];
      temp3 = R[8];

      R[6] = B[6];
      R[7] = B[7];
      R[8] = B[8];

      B[6] = O[6];
      B[7] = O[7];
      B[8] = O[8];

      O[6] = G[6];
      O[7] = G[7];
      O[8] = G[8];

      G[6] = temp1;
      G[7] = temp2;
      G[8] = temp3;

      ex1 = Y[0];
      ex2 = Y[1];

      Y[0] = Y[2];
      Y[1] = Y[5];
      Y[2] = Y[8];
      Y[5] = Y[7];
      Y[8] = Y[6];
      Y[7] = Y[3];
      Y[6] = ex1;
      Y[3] = ex2;
    }
    else if (strcmp(t, "f") == 0)
    {
      temp1 = W[6];
      temp2 = W[7];
      temp3 = W[8];

      W[6] = G[2];
      W[7] = G[5];
      W[8] = G[8];

      G[2] = Y[0];
      G[5] = Y[1];
      G[8] = Y[2];

      Y[0] = B[0];
      Y[1] = B[3];
      Y[2] = B[6];

      B[0] = temp1;
      B[3] = temp2;
      B[6] = temp3;

      ex1 = R[0];
      ex2 = R[1];

      R[0] = R[6];
      R[1] = R[3];
      R[6] = R[8];
      R[3] = R[7];
      R[8] = R[2];
      R[7] = R[5];
      R[5] = ex2;
      R[2] = ex1;
    }
    else if (strcmp(t, "fi") == 0)
    {
      temp1 = W[6];
      temp2 = W[7];
      temp3 = W[8];

      W[6] = B[0];
      W[7] = B[3];
      W[8] = B[6];

      B[0] = Y[0];
      B[3] = Y[1];
      B[6] = Y[2];

      Y[0] = G[2];
      Y[1] = G[5];
      Y[2] = G[8];

      G[2] = temp3;
      G[5] = temp2;
      G[8] = temp1;

      ex1 = R[0];
      ex2 = R[1];

      R[0] = R[2];
      R[1] = R[5];
      R[2] = R[8];
      R[5] = R[7];
      R[8] = R[6];
      R[7] = R[3];
      R[6] = ex1;
      R[3] = ex2;
    }
    else if (strcmp(t, "b") == 0)
    {
      temp1 = W[0];
      temp2 = W[1];
      temp3 = W[2];

      W[0] = B[2];
      W[1] = B[5];
      W[2] = B[8];

      B[2] = Y[0];
      B[5] = Y[1];
      B[8] = Y[2];

      Y[6] = G[0];
      Y[7] = G[3];
      Y[8] = G[6];

      G[0] = temp1;
      G[3] = temp2;
      G[6] = temp3;

      ex1 = O[0];
      ex2 = O[1];

      O[0] = O[6];
      O[1] = O[3];
      O[6] = O[8];
      O[3] = O[7];
      O[8] = O[2];
      O[7] = O[5];
      O[5] = ex2;
      O[2] = ex1;
    }
    else if (strcmp(t, "bi") == 0)
    {
      temp1 = W[0];
      temp2 = W[1];
      temp3 = W[2];

      W[0] = G[0];
      W[1] = G[3];
      W[2] = G[6];

      G[0] = Y[2];
      G[3] = Y[1];
      G[6] = Y[0];

      Y[0] = G[2];
      Y[1] = G[5];
      Y[2] = G[8];

      B[2] = temp1;
      B[5] = temp2;
      B[8] = temp3;

      ex1 = O[0];
      ex2 = O[1];

      O[0] = O[6];
      O[1] = O[3];
      O[6] = O[8];
      O[3] = O[7];
      O[8] = O[2];
      O[7] = O[5];
      O[5] = ex2;
      O[2] = ex1;
    }
    else if (strcmp(t, "in") == 0)
    {
      char color;
      do
      {
        printf("R: red      Y:yellow        W:white     B:blue      G:green     O:orange      E: tiep tuc xoay.");
        printf("\nnhap mat mau muon in: ");
        scanf(" %c", &color);
        if (color == 'R')
          PrintfColor(R);
        else if (color == 'Y')
          PrintfColor(Y);
        else if (color == 'W')
          PrintfColor(W);
        else if (color == 'B')
          PrintfColor(B);
        else if (color == 'G')
          PrintfColor(G);
        else if (color == 'O')
          PrintfColor(O);
        else if (color == 'E')
        {
          printf("tiep tuc xoay.");
          fflush(stdin);
          break;
        }
        else
        {
          printf("ki tu vua nhap khong hop le.\n");
          break;
        }
      } while (1);
    }
    else if (strcmp(t, "oo") == 0)
    {
      printf("DA THOAT KHOI CHUONG TRINH");
      return 0;
    }
    else
      printf("Da nhap sai toan tu xoay. Moi nhap lai.\n");
  } while ((strcmp(t, "oo") != 0));
}

void PrintfColor(char string[])
{
  for (int i = 0; i < 3; i++)
  {
    printf("\t%c", string[i]);
  }
  printf("\n");
  for (int i = 3; i < 6; i++)
  {
    printf("%c\t", string[i]);
  }
  printf("\n");
  for (int i = 6; i < 9; i++)
  {
    printf("\t%c", string[i]);
  }
  printf("\n");
}