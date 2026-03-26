int main()
{
    int A[3] = {5, 9, 6};
    int B[3] = {10, 8, 7};

    int pontoA = 0;
    int pontoB = 0;
    int i;

    for(i = 0; i < 3; i++){
        if(A[i] > B[i]){
            pontoA++;
        } else if (B[i] > A[i]){
            pontoB++;
        } else {

        }
    }

    printf("Pontos do Funcionário A: %d\n", pontoA);
    printf("Pontos do Funcionário B: %d\n", pontoB);

    return 0;
}