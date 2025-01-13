void verificaIdade(int idade){
    if(idade > 110 || idade <1){
        printf("\nIdade Inv�lida (Informe uma idade entre 1 e 110 anos)\n");
    }
}

void verificaSexo(char sexo){
    if(sexo != 'M' && sexo && 'm' && sexo != 'F' && sexo != 'f'){
        printf("\nSexo Inv�lido. Digite M ou F\n");
    }
}

void imprimeSexo(char sexo){
    if(sexo == 'M' || sexo == 'm'){
            printf(" Masculino\n");
    }


    else if(sexo == 'F' || sexo == 'f'){
        printf(" Feminino\n");
    }
}

float calculaIMC(int altura, int peso){

    float altura_metros = altura/100.0;
    float imc = 0;

imc = peso / (altura_metros * altura_metros);

return imc;
}


void resultadoIMC(float IMC){
    if(IMC < 17.0){
        printf("Muito Abaixo do Peso\n Possiveis Riscos:ANEMIA GRAVE E ESFRAQUECIMENTO DO SISTEMA IMUNE\n");
    }

    else if(IMC > 17.0 && IMC < 18.5){
        printf("Abaixo do Peso\n Possiveis Riscos:PROBLEMAS DE SA�DE LIGADOS A DESNUTRI��O\n");
    }

    else if(IMC > 18.5 && IMC < 24.9){
        printf("Peso Normal\n Possiveis Riscos:NENHUM");
    }


    else if(IMC > 25.0 && IMC < 29.9){
        printf("Sobrepeso\n Possiveis Riscos: FADIGA, VARIZES, M� CIRCULA��O SANGUINEA");
    }

    else if(IMC > 30.0 && IMC < 34.9){
        printf("Obesidade grau |\n Possiveis Riscos: DIABETES, INFARTO, ANGINA, ATEROSCLEROSE");
    }

    else if(IMC > 35.0 && IMC < 39.9){
        printf("Obesidade severa\n Possiveis Riscos: FALTA DE AR, APNEIA DO SONO");
    }

    else if(IMC > 25.0 && IMC < 29.9){
        printf("Obesidade M�rbida\n Possiveis Riscos: REFLUXO, INFARTO, AVC, DIFICULDADE PARA LOCOMO��O");
    }


}
