#include <locale.h> 
#include <stdio.h>
#include <stdlib.h>
#define ex1

#ifdef ex1
main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
    int cont;
  // para o usuário escolher sair   
  do
        {
             
          //inicio projeto       
          system("cls");
             
          //entrada      
          int hora,
          min, seg, horaf, minf, segf;
        
          //alimentação       
          do        {
                    printf("\nDigite o horário de inicio da ligação: "
                           "(hora:min:seg) \n HORAS: ");
          scanf("%d", &hora);
          
      }
        while (hora > 24);
        do        {
              printf("MINUTOS: ");
                scanf("%d", &min);
              
      }
      while (min > 59)
        ;
         do        {
                 printf("SEGUNDOS: ");
             scanf("%d", &seg);
              
      }
       while (seg > 59);
             
          //fim       
          do       {
                    printf(
            "\nDigite o horário final da ligação: (hora:min:seg) \n HORAS: ");
                   scanf("%d", &horaf);
               
      }
              while (horaf > 24);
            do        {
               printf("MINUTOS: ");
             scanf("%d", &minf);
           
      }
              while (minf > 59);
          do        {
                   printf("SEGUNDOS: ");
            scanf("%d", &segf);
            
      }
              while (segf > 59);
         
          //função       
          seg = segf - seg;
         if (seg < 0)        {
                   min++;
            seg = 60 + seg;
           
      }
             min = minf - min;
        if (min < 0)        {
                    hora++;
                min = 60 + min;
           
      }
             hora = horaf - hora;
      if (hora < 0)
               {
                      hora = 24 + hora;
            
        }
            
          //saida       
          printf("\n\n Diferença \n\n");
         printf("%d horas %d minutos %d segundos", hora, min, seg);
       
          //perguntar se o usuário quer finalizar  
          printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
         scanf("%d", &cont);
              if (cont == 1)       
                break;
        
    }
      while (1 == 1);
}
#endif

#ifdef ex2
main() {
  // principais do main  
  setlocale(LC_ALL, "Portuguese");
  int cont;
  // para o usuário escolher sair   
  do {
    // inicio projeto   
    system("cls");
    // entrada       
    int num = 50, aux = 25, i = 1, max = 100, min = 0;
    char mim;
    printf("Pense num número \n");
    system("pause");
    // função        
    do {
      // collocando limite
      if (num <= min)
        num = num + (aux / (1 + i));
      if (num >= max)
        num = num - (aux / (1 + i));
      if (num < 0)
        num = 1;
      printf(" é %d? (>, =, <)", num);
      mim = getchar();
      getchar();

      if (mim == '=') {
        printf("Aee acertei");
        break;

      } else if (mim == '>') {
        min = num;
        num = num + (aux / i);

      } else if (mim == '<') {
        max = num;
        num = num - (aux / i);
      }

      i++;
    } while (i <= 20);
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim, 2-Não)");
    scanf("%d", &cont);
    if (cont == 1) {
      break;
    }
    getchar();
  } while (1 == 1);
}
#endif

#ifdef ex3
main() {
  // principais do main  
  setlocale(LC_ALL, "Portuguese");
  int cont;
  // para o usuário escolher sair   
  do {
    // inicio projeto   
    system("cls");
    // entrada       
    int num = 50, aux = 25, i = 1, max = 100, min = 0;
    char mim;
    printf("Pense num número \n");
    system("pause");
    // função        
    do {
      // collocando limite
      if (num <= min)
        num = num + (aux / (1 + i));
      if (num >= max)
        num = num - (aux / (1 + i));
      if (num < 0)
        num = 1;
      printf(" %d° é %d? (>, =, <)", i, num);
      mim = getchar();
      getchar();

      switch (mim) {
      case '=': {
        printf("Aee acertei");
        i = 8;
        break;
      }
      case '>': {
        min = num;
        num = num + (aux / i);
        break;
      }
      case '<': {
        max = num;
        num = num - (aux / i);
        break;
      }
      }
      i++;
    } while (i <= 8);
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim, 2-Não)");
    scanf("%d", &cont);
    if (cont == 1) {
      break;
    }
    getchar();
  } while (1 == 1);
}
#endif

#ifdef ex4
main() {
  // principais do main  
  setlocale(LC_ALL, "Portuguese");
  int cont;
  // para o usuário escolher sair   
  do {
    // inicio projeto   
    system("cls");
    // entrada       
    int num, som = 0, i = 0;
    float med;

    /// alimentação
    do {
      printf("\n Digite o número inteiro positivo: ");
      scanf("%d", &num);

      if (num >= 0) {
        som += num;
        i++;
        }
        else 
        break;
      
      }while (1 == 1)
        ;

      // função
      med = som / i;

      // saída
      printf("\n A média dos números positivos é: %.2f", med);

      // perguntar se o usuário quer finalizar  
      printf("\n \n deseja finalizar? (1-Sim, 2-Não)");
      scanf("%d", &cont);
      if (cont == 1) {
        break;
      }

    } while (1 == 1);
  }
#endif

#ifdef ex5
  main() {
    // principais do main  
    setlocale(LC_ALL, "Portuguese");
    int cont;
    // para o usuário escolher sair   
    do {
      // inicio projeto   
      system("cls");
      // entrada       
      float km, lit, div;

      /// alimentação
      printf("Digite o km percorrido: ");
      scanf("%f", &km);
      printf("\nDigite o consumo em litros da gasolina: ");
      scanf("%f", &lit);

      // função
      div = km / lit;
      printf("Consumo (km/L): %.2f", div);
      if (div < 8)
        printf("\n !! Venda o carro!!");
      else if (div < 14)
        printf("\n Econômico!");
      else
        printf("\n Super econômico!");

      // perguntar se o usuário quer finalizar  
      printf("\n \n deseja finalizar? (1-Sim, 2-Não)");
      scanf("%d", &cont);
      if (cont == 1) {
        break;
      }

    } while (1 == 1);
  }
#endif
