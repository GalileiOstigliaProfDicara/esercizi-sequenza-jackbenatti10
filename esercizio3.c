

#include <stdio.h>

int main() {
    int prezzo,percentuale_sconto, sconto_effettuato, prezzo_scontato;
    
    printf("inserisci il prezzo:");
    scanf("%d , &sconto_percentuale);
        
        sconto_effettuato = prezzo * (sconto_percentuale/100);
        printf(" lo sconto effettuato è %d\n, sconto_effettuato");
      
        prezzo_scontato = prezzo - sconto_effettuato;
        printf("il prezzo scontato è %d\, prezzo_scontato");
        
        printf(" il prezzo pieno è %d\n, prezzo_pieno");
        return 0;
