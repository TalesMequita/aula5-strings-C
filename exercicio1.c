int main()
{
    int precos[] = {10, 20, 35, 50, 75};
    int tamanho = 5;
    int alvo = 55;
    
    int i, j;
    int encontrou = 0;
    
    for(i = 0; i < tamanho; i++){
      for (j = i + 1; j < tamanho; j++){
        if (precos[i] + precos[j] == alvo){
          printf("Indices encontrados: [%d, %d]\n", i, j);
          encontrou = 1;
          break;
        }
      }
      if (encontrou){
        break;
      }
    }
    
    if (!encontrou){
      printf("Nenhum par encontrado.\n");
    }
    return 0;
}