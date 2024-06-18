//Bee 1040 - Average 3

#include <stdio.h>

int main ()
{
  float N1, N2, N3, N4, NE ,media, mediaf;
  scanf("%f %f %f %f %f", &N1, &N2, &N3, &N4, &NE);
  media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10.0;
  
  if (media >= 7.0){
      printf("Media: %.1f\nAluno aprovado.\n", media);
  } else if (media < 5.0) {
      printf("Media: %.1f\nAluno reprovado.\n", media);
  } else if (media >= 5.0 && media < 7.0) {
      printf("Media: %.1f\nAluno em exame.\n", media);
      printf("Nota do exame: %.1f\n", NE);
      mediaf = (media + NE) / 2.0;
      if (mediaf >= 5.0){
         printf("Aluno aprovado.\nMedia final: %.1f\n", mediaf);
      } else {
          printf("Aluno reprovado.\nMedia final: %.1f\n", mediaf);
      }
  }
  return 0;
}