// daqui até o último #define é pra ter as notas pras músicas
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0
//aqui termina as notas

//esse aqui é a variável que vai guardar como as notas devem ser tocadas na musica do sonic
int melody[] = {

  // Gren Hill Zone - Sonic the Hedgehog
  // Score available at https://musescore.com/user/248346/scores/461661
  // Theme by Masato Nakamura, arranged by Teddy Mason
  
  REST,2, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8, NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8, NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,2,REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8, NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8,NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8,NOTE_E4,-1,REST,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,-1,REST,8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8, NOTE_F4,-1, //20REST,8, NOTE_D4,8, NOTE_F4,8, NOTE_E4,-1, //end 1

  //repeats from 1

  REST,2, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8, NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8, NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,2,REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_A4,8, NOTE_FS5,8, NOTE_E5,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,4, NOTE_D5,8, NOTE_B4,4, NOTE_D5,8,NOTE_CS5,4, NOTE_D5,8, NOTE_CS5,4, NOTE_A4,2, REST,8, NOTE_B4,8, NOTE_B4,8, NOTE_G4,4, NOTE_B4,8,NOTE_A4,4, NOTE_B4,8, NOTE_A4,4, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8,NOTE_E4,-1,REST,8, NOTE_D4,8, NOTE_E4,8, NOTE_FS4,-1,REST,8, NOTE_D4,8, NOTE_D4,8, NOTE_FS4,8, NOTE_F4,-1, REST,8, NOTE_D4,8, NOTE_F4,8, NOTE_E4,8, 
};
//essa é a variável que guarda a da música do tetris
int meloda[] = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=192
    
  NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8, NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8, NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4, NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8, NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4, NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,NOTE_E5, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_C5,8,  NOTE_B4,8,NOTE_A4, 4,  NOTE_A4,8,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,NOTE_B4, -4,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,8,  NOTE_A4,4,  NOTE_B4,8,  NOTE_C5,8,NOTE_D5, -4,  NOTE_F5,8,  NOTE_A5,4,  NOTE_G5,8,  NOTE_F5,8,NOTE_E5, -4,  NOTE_C5,8,  NOTE_E5,4,  NOTE_D5,8,  NOTE_C5,8,NOTE_B4, 4,  NOTE_B4,8,  NOTE_C5,8,  NOTE_D5,4,  NOTE_E5,4,NOTE_C5, 4,  NOTE_A4,4,  NOTE_A4,4, REST, 4,NOTE_E5,2,  NOTE_C5,2,NOTE_D5,2,   NOTE_B4,2,NOTE_C5,2,   NOTE_A4,2,NOTE_GS4,2,  NOTE_B4,4,  REST,8, NOTE_E5,2,   NOTE_C5,2, NOTE_D5,2,   NOTE_B4,2,NOTE_C5,4,   NOTE_E5,4,  NOTE_A5,2,NOTE_GS5,2,
};
//e essa a que guarda a da música do STAR WARS
int melodi[] = {
    
  // Dart Vader theme (Imperial March) - Star wars 
  // Score available at https://musescore.com/user/202909/scores/1141521
  // The tenor saxophone part was used
  
  NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8,NOTE_F5,2, NOTE_C6,2,NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,NOTE_F5,2, NOTE_C6,2,NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16,NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C5,-8, NOTE_C5,16,NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C6,-8, NOTE_C6,16,NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,NOTE_C6,1
    
};
int tempo = 0; //definindo variável que será usada pra fazer a música
int buzzer = 7; //definindo variável pra usar o  buzzer/piezo
int numRandom = 0; //variável que vai guardar um numero aleatorio
//soma da sequencia (cada botao vai somar um 
//que se for difente dessa soma reseta o jogo)
int numsdaseq = 1; //quantos numeros há na sequencia
int x = 0; //variavel responsavel por ver qnts vzs vai repetir o começo
int seq[100] = {}; // guarda valores anteiores da sequencia
int seqsoma[4] = {2, 3, 4, 5}; // valores a serem somados na repetição dos valores anteriores
int s = 0; //determina qual é o número do vetor
int bot[100] = {}; //sequência máxima
int seqbot = 0; // comparação das sequencias do botao com a normal (usada dentro do vetor)
int start = 0; //condição pra começar o jogo
int dificuldade = 2;//0 = infinito; 1 = fácil; 2 = médio; 3 = díficl
int musica = 10; // determina qual musica vai ser
//musica#  1 == TETRIS; 2 == sonic; 3 == STAR WARS;
int notes = 0;// variável pra música
int wholenote = ((60000 * 4)/ tempo); //variável pra música
int divider = 0, noteDuration = 0;//variável pra música
void luz_tetris(){ // sequência pré - determinada da música
  seq[0] = 2;
  seq[1] = 3;
  seq[2] = 4;
  seq[3] = 5;
  seq[4] = 5;
  seq[5] = 4;
  seq[6] = 3;
  seq[7] = 4;
  seq[8] = 5;
  seq[9] = 2;
  seq[10] = 3;
  seq[11] = 4;
  seq[12] = 5;
  seq[13] = 2;
  seq[14] = 2;
  seq[15] = 5;
  seq[16] = 4;
  seq[17] = 5;
  seq[18] = 3;
  seq[19] = 5;
  seq[20] = 2;
  seq[21] = 2;
  seq[22] = 4;
  seq[23] = 2;
  seq[24] = 3;
  seq[25] = 3;
  seq[26] = 4;
  seq[27] = 5;
  seq[28] = 2;
  seq[29] = 3;
  seq[30] = 5;
  seq[31] = 4;
  seq[32] = 5;
  seq[33] = 3;
  seq[34] = 2;
  seq[35] = 3;
  seq[36] = 4;
  seq[37] = 5;
  seq[38] = 3;
  seq[39] = 4;
  seq[40] = 5;
  seq[41] = 2;
  seq[42] = 3;
  seq[43] = 5;
  seq[44] = 4;
  seq[45] = 4;
  seq[46] = 4;
  seq[47] = 3;
  seq[48] = 2;
  seq[49] = 4; 
}
void luz_sonic(){// sequência pré - determinada da música
  seq[0] = 2;
  seq[1] = 3;
  seq[2] = 4;
  seq[3] = 5;
  seq[4] = 4;
  seq[5] = 5;
  seq[6] = 2;
  seq[7] = 5;
  seq[8] = 4;
  seq[9] = 3;
  seq[10] = 4;
  seq[11] = 5;
  seq[12] = 4;
  seq[13] = 5;
  seq[14] = 2;
  seq[15] = 3;
  seq[16] = 2;
  seq[17] = 4;
  seq[18] = 5;
  seq[19] = 4;
  seq[20] = 5;
  seq[21] = 4;
  seq[22] = 2;
  seq[23] = 3;
  seq[24] = 2;
  seq[25] = 3;
  seq[26] = 4;
  seq[27] = 2;
  seq[28] = 4;
  seq[29] = 5;
  seq[30] = 2;
  seq[31] = 3;
  seq[32] = 3;
  seq[33] = 4;
  seq[34] = 5;
  seq[35] = 4;
  seq[36] = 5;
  seq[37] = 3;
  seq[38] = 2;
  seq[39] = 4;
  seq[40] = 2;
  seq[41] = 5;
  seq[42] = 3;
  seq[43] = 2;
  seq[44] = 4;
  seq[45] = 5;
  seq[46] = 4;
  seq[47] = 5;
  seq[48] = 3;
  seq[49] = 2; 
}
void luz_starwars(){// sequência pré - determinada da música
  seq[0] = 2;
  seq[1] = 3;
  seq[2] = 4;
  seq[3] = 5;
  seq[4] = 2;
  seq[5] = 3;
  seq[6] = 4;
  seq[7] = 5;
  seq[8] = 3;
  seq[9] = 2;
  seq[10] = 4;
  seq[11] = 5;
  seq[12] = 3;
  seq[13] = 5;
  seq[14] = 4;
  seq[15] = 3;
  seq[16] = 2;
  seq[17] = 4;
  seq[18] = 5;
  seq[19] = 3;
  seq[20] = 2;
  seq[21] = 4;
  seq[22] = 2;
  seq[23] = 3;
  seq[24] = 5;
  seq[25] = 3;
  seq[26] = 4;
  seq[27] = 5;
  seq[28] = 4;
  seq[29] = 3;
  seq[30] = 2;
  seq[31] = 3;
  seq[32] = 5;
  seq[33] = 4;
  seq[34] = 5;
  seq[35] = 3;
  seq[36] = 5;
  seq[37] = 3;
  seq[38] = 4;
  seq[39] = 5;
  seq[40] = 2;
  seq[41] = 5;
  seq[42] = 3;
  seq[43] = 2;
  seq[44] = 4;
  seq[45] = 3;
  seq[46] = 4;
  seq[47] = 3;
  seq[48] = 2;
  seq[49] = 5; 
}
void perdesistiu(){//úsica de derrota ou desistência
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  tone(7, 200, 3000);
  delay(3000);
  noTone(7);
  delay(500);
  start = 0;
  s = 1;
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}
void vitoria(){ //som da vitória
  tone(7, 800,500);
  delay(500);
  noTone(7);
  tone(7, 1000, 500);
  delay(500);
  noTone(7);
  tone(7, 600,500);
  delay(500);
  noTone(7);
  tone(7, 850,500);
  delay(500);
  noTone(7);
  tone(7, 550,500);
  delay(500);
  noTone(7);
  delay(430);
  tone(7, 550, 500);
  delay(500);
  noTone(7);
  delay(1000);
}
void tocamusica1(){//toca versão minimizada da música 
  tempo = 144;
  notes=sizeof(meloda)/sizeof(meloda[0])/2; 
  wholenote = (60000 * 4) / tempo;
  divider = 0;
  noteDuration = 0;
  for (int thisNote = 0; thisNote < notes * 0.138; thisNote = thisNote + 2) {
    // calculates the duration of each note
    divider = meloda[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, meloda[thisNote], noteDuration * 0.9);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}
void tocamusica2(){ //toca versão minimizada da música
  tempo = 140;
  notes=sizeof(melody)/sizeof(melody[0])/2; 
  wholenote = (60000 * 4) / tempo;
  divider = 0;
  noteDuration = 0;
  for (int thisNote = 0; thisNote < notes * 0.2; thisNote = thisNote + 2) {
    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody[thisNote], noteDuration * 0.9);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}
void tocamusica3(){ // toca versão minimizada da música
  tempo = 108;
  notes=sizeof(melodi)/sizeof(melodi[0])/2; 
  wholenote = (60000 * 4) / tempo;
  divider = 0;
  noteDuration = 0;
  for (int thisNote = 0; thisNote < notes * 0.43; thisNote = thisNote + 2) {
    // calculates the duration of each note
    divider = melodi[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melodi[thisNote], noteDuration * 0.9);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}
void tocamusica1f(){//toca a música completa
  luz_tetris();
  tempo = 144;
  notes=sizeof(meloda)/sizeof(meloda[0])/2; 
  wholenote = (60000 * 4) / 144;
  divider = 0;
  noteDuration = 0;
  x-=1;
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    if (x == 49){
      x =0;
    }
    x += 1;
    // calculates the duration of each note
    divider = meloda[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, meloda[thisNote], noteDuration * 0.9);
    digitalWrite(seq[x], HIGH);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
    digitalWrite(seq[x],LOW);
  }
}
void tocamusica2f(){//toca a música completa
  luz_tetris();
  tempo = 140;
  notes=sizeof(melody)/sizeof(melody[0])/2; 
  wholenote = (60000 * 4) / 140;
  divider = 0;
  noteDuration = 0;
  x -= 1;
  for (int thisNote = 0; thisNote < notes * 1; thisNote = thisNote + 2) {
    if (x == 49){
      x =0;
    }
    x += 1;
    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody[thisNote], noteDuration * 0.9);
    digitalWrite(seq[x], HIGH);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
    digitalWrite(seq[x],LOW);
  }
}
void tocamusica3f(){//toca música completa
  luz_starwars();
  tempo = 108;
  notes=sizeof(melodi)/sizeof(melodi[0])/2; 
  wholenote = (60000 * 4) / 108;
  divider = 0;
  noteDuration = 0;
  x -=1;
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    if (x == 49){
      x =0;
    }
    x += 1;
    // calculates the duration of each note
    divider = melodi[thisNote + 1];
    if (divider > 0) {
    // regular note, just proceed
    noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5; // increases the duration in half for dotted notes
    }
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melodi[thisNote], noteDuration * 0.9);
    digitalWrite(seq[x], HIGH);
    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    // stop the waveform generation before the next note.
    noTone(buzzer);
    digitalWrite(seq[x],LOW);
  }
}

void setup(){
  pinMode(2, OUTPUT); //LED verde
  pinMode(3, OUTPUT); //LED amarelo
  pinMode(4, OUTPUT); //LED azul
  pinMode(5, OUTPUT); //LED vermelho
  pinMode(12, INPUT_PULLUP); //botao vermelho
  pinMode(11, INPUT_PULLUP); //botao azul
  pinMode(10, INPUT_PULLUP); //botao amarelo
  pinMode(9, INPUT_PULLUP); //botao verde
  pinMode(8, INPUT_PULLUP); //botão iniciar
  pinMode(6, INPUT_PULLUP); //botão da musica
  pinMode(0, INPUT_PULLUP); //botão desistir
  Serial.begin(9600);
  randomSeed(analogRead(1)); // gerar valores aleatórios
}

void loop()
{
  while (start == 0){
    if (digitalRead(6) == LOW){
      musica = 0;
      while(start == 0){
        if (digitalRead(6) == LOW){
          if (musica >= 3){
            musica = 0;
            s = 1;
            tone(7,100,200);
            delay(200);
            noTone(7);
            tone(7,200,200);
            delay(200);
            noTone(7);
            tone(7,300,200);
            delay(200);
            noTone(7);
            tone(7,400,200);
            delay(200);
            noTone(7);
            tone(7,500,200);
            delay(200);
            noTone(7);
            tone(7,1000,200);
            delay(500);
            noTone(7);
            tone(7,100,200);
            delay(200);
            noTone(7);
            tone(7,200,200);
            delay(200);
            noTone(7);
            tone(7,300,200);
            delay(200);
            noTone(7);
            tone(7,400,200);
            delay(200);
            noTone(7);
            tone(7,500,200);
            delay(200);
            noTone(7);
            tone(7,1000,200);
            delay(200);
            noTone(7);
          }else{
            musica += 1;
            s = 1;
            if(musica == 1){
              tocamusica1();
            }
            if (musica == 2){
              tocamusica2();
            }
            if (musica == 3){
              tocamusica3();
            }
          }
        }
        if (digitalRead(0) == LOW){
          digitalWrite(2, HIGH);
          digitalWrite(3, HIGH);
          digitalWrite(4, HIGH);
          digitalWrite(5, HIGH);
          tone(7,200,1000);
          delay(750);
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
          digitalWrite(4, LOW);
          digitalWrite(5, LOW);
          musica = 0;
          break;
        }
        if (digitalRead(8) == LOW){
        start = 1;
        tone(7, 500, 1000);
        delay(1000);
        noTone(7);
        delay(1000);
        }
      }
    }
    if (digitalRead(8) == LOW){
      start = 1;
      tone(7, 500, 1000);
      delay(1000);
      noTone(7);
      delay(1000);
    }     
    if (digitalRead(1) == LOW){
      if (dificuldade != 3){
        dificuldade += 1;
        if(dificuldade == 1){
          tone(7, 1000, 500);
          delay(1000);
          noTone(7);
        }
        if (dificuldade == 2){
          tone(7, 750, 500);
          delay(1000);
          noTone(7);
        }
        if (dificuldade == 3){
          tone(7, 300, 500);
          delay(1000);
          noTone(7);
        }
      }else{
        dificuldade = 0;
        tone(7, 100, 500);
        delay(1000);
        noTone(7);
      }
    }
  }
  if (s != 1 && musica == 10){
    if (numsdaseq > 1){ //condição para realizar a repetição dos primeiros numeros
      while (x != (numsdaseq - 1)){
        digitalWrite(seq[x], HIGH);
        if (seq[x] == 2){
          tone(7, 200, 200);
        }
        if(seq[x] == 3){
          tone(7, 400, 200);
        }
        if (seq[x] == 4) {
          tone(7, 600, 200);
        }
        if(seq[x] == 5){
          tone(7, 800, 200);
        }
        delay(500); 
        digitalWrite(seq[x], LOW);
        noTone(7);
        delay(200);
        x += 1;
      }
      
    }
    numRandom = random(2, 6);
    Serial.println(numRandom);
    if (numRandom == 2){ //adiciona um novo numero
      digitalWrite(2, HIGH);
      tone(7, 200, 200);
      delay(500); 
      digitalWrite(2, LOW);
      noTone(7);
      delay(200);
      seq[x] = 2;
    }
    if (numRandom == 3){
      digitalWrite(3, HIGH);
      tone(7, 400, 200);
      delay(500); 
      digitalWrite(3, LOW);
      noTone(7);
      delay(200); 
      seq[x] = 3;
    }
    if (numRandom == 4){
      digitalWrite(4, HIGH);
      tone(7, 600,200);
      delay(500); 
      digitalWrite(4, LOW);
      
      noTone(7);
      delay(200); 
      seq[x] = 4;
    }
    if (numRandom == 5){
      digitalWrite(5, HIGH);
      tone(7, 800, 200);
      delay(500); 
      digitalWrite(5, LOW);
      noTone(7);
      delay(200); 
      seq[x] = 5;
    }
    while (s != 1 || bot[seqbot] == seq[seqbot]){
      if (digitalRead(0) == LOW){
        perdesistiu();
        break;
      }
      if (digitalRead(9) == LOW){
        digitalWrite(2, HIGH);
        bot[seqbot] = 2;
        if (bot[seqbot] != seq[seqbot]){
          perdesistiu();
          break;
        }else{
          tone(7, 200, 200);
          delay(500);
        }
        digitalWrite(2, LOW);
        seqbot +=1;
        if (seqbot == numsdaseq){
          break;
        }
      }
      if (digitalRead(10) == LOW){
        digitalWrite(3, HIGH);
        bot[seqbot] = 3;
        if (bot[seqbot] != seq[seqbot]){
          perdesistiu();
          break;
        }else{
          tone(7, 400, 200);
          delay(500);
        }
        digitalWrite(3, LOW);
        seqbot +=1;
        if (seqbot == numsdaseq){
          break;
        }
      }
      if (digitalRead(11) == LOW){
        digitalWrite(4, HIGH);
        bot[seqbot] = 4;
        if (bot[seqbot] != seq[seqbot]){
          perdesistiu();
          break;
        }else{
          tone(7,600,200);
          delay(500); 
        }
        digitalWrite(4, LOW);
        seqbot +=1;
        if (seqbot == numsdaseq){
          break;
        }
      }
      if (digitalRead(12) == LOW){
        digitalWrite(5, HIGH);
        bot[seqbot] = 5;
        if (bot[seqbot] != seq[seqbot]){
          perdesistiu();
          break;
        }else{
          tone(7, 800, 250);
          delay(500);
        }
        digitalWrite(5, LOW);
        seqbot +=1;
        if (seqbot == numsdaseq){
          break;
        }
      }
    }
    if (dificuldade == 0){
      if (bot[99] == 2 || bot[99] == 3 || bot[99] == 4 || bot[99] == 5){
        if (s!= 1){
          vitoria();
          start = 0;
          s = 1;
        }else{
          perdesistiu();
        }
      }
    }
    if (dificuldade == 1){
      if (bot[5] == 2 || bot[5] == 3 || bot[5] == 4 || bot[5] == 5){
        if (s != 1){
          vitoria();
          start = 0;
          s = 1;
        }else{
          perdesistiu();
        }
      }
    }
    if (dificuldade == 2){
      if (bot[9] == 2 || bot[9] == 3 || bot[9] == 4 || bot[9] == 5){
        if (s != 1){
          vitoria();
          start = 0;
          s = 1;
        }else{
          perdesistiu();
        }
      }
    }
    if (dificuldade == 3){
      if (bot[19] == 2 || bot[19] == 3 || bot[19] == 4 || bot[19] == 5){
        if(s != 1){
          vitoria();
          start = 0;
          s = 1;
        }else{
          perdesistiu();
        }
      }
    }
    seq[x] = numRandom;
    x = 0;
    delay(1000);
    numsdaseq += 1;
    if (s == 1 || s == 2){
      numsdaseq = 1;
      while (x != 100){
        seq[x] = 0;
        bot[x] = 0;
        x +=1;
        start = 0;
      }
    }
  }else{
    if (musica == 1){
      tocamusica1f();
      while(digitalRead(0) == HIGH ){
        luz_tetris();
        if (digitalRead(12)==LOW){
          bot[seqbot] = 5;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(5, HIGH);
            tone(7, 800, 400);
            delay(500);
            noTone(7);
            digitalWrite(5,LOW);
          }          
        }
        if (digitalRead(11) ==LOW){
          bot[seqbot] = 4;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(4, HIGH);
            tone(7, 600, 400);
            delay(500);
            noTone(7);
            digitalWrite(4,LOW);
          }
        }
        if (digitalRead(10)==LOW){
          bot[seqbot] = 3;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(3, HIGH);
            tone(7, 400, 400);
            delay(500);
            noTone(7);
            digitalWrite(3,LOW);
          }
        }
        if (digitalRead(9)==LOW){
          bot[seqbot] = 2;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(2, HIGH);
            tone(7, 200, 400);
            delay(500);
            noTone(7);
            digitalWrite(2,LOW);
          }
        }
        if (bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot]){
          seqbot += 1;
        }
      } 
      if(bot[49] == seq[49]){
        vitoria();
        tocamusica1f();
      }
    }else{
      s = 1;
    }
    if (musica == 2){
      tocamusica2f();
      while(digitalRead(0) == HIGH ){
        luz_sonic();
        if (digitalRead(12)==LOW){
          bot[seqbot] = 5;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(5, HIGH);
            tone(7, 800, 400);
            delay(500);
            noTone(7);
            digitalWrite(5,LOW);
          }          
        }
        if (digitalRead(11) ==LOW){
          bot[seqbot] = 4;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(4, HIGH);
            tone(7, 600, 400);
            delay(500);
            noTone(7);
            digitalWrite(4,LOW);
          }
        }
        if (digitalRead(10)==LOW){
          bot[seqbot] = 3;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(3, HIGH);
            tone(7, 400, 400);
            delay(500);
            noTone(7);
            digitalWrite(3,LOW);
          }
        }
        if (digitalRead(9)==LOW){
          bot[seqbot] = 2;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(2, HIGH);
            tone(7, 200, 400);
            delay(500);
            noTone(7);
            digitalWrite(2,LOW);
          }
        }
        if (bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot]){
          seqbot += 1;
        }
      } 
      if(bot[49] == seq[49]){
        vitoria();
        tocamusica2f();
      }
    }
    if (musica == 3){
      tocamusica3f();
      while(digitalRead(0) == HIGH ){
        luz_starwars();
        if (digitalRead(12)==LOW){
          bot[seqbot] = 5;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(5, HIGH);
            tone(7, 800, 400);
            delay(500);
            noTone(7);
            digitalWrite(5,LOW);
          }          
        }
        if (digitalRead(11) ==LOW){
          bot[seqbot] = 4;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(4, HIGH);
            tone(7, 600, 400);
            delay(500);
            noTone(7);
            digitalWrite(4,LOW);
          }
        }
        if (digitalRead(10)==LOW){
          bot[seqbot] = 3;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(3, HIGH);
            tone(7, 400, 400);
            delay(500);
            noTone(7);
            digitalWrite(3,LOW);
          }
        }
        if (digitalRead(9)==LOW){
          bot[seqbot] = 2;
          if (bot[seqbot] != seq[seqbot]){
            perdesistiu();
            break;
          }else{
            digitalWrite(2, HIGH);
            tone(7, 200, 400);
            delay(500);
            noTone(7);
            digitalWrite(2,LOW);
          }
        }
        if (bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot] || bot[seqbot] == seq[seqbot]){
          seqbot += 1;
        }
      } 
      if(bot[49] == seq[49]){
        vitoria();
        tocamusica3f();
      }
    }
  }
  x = 0;
  s = 0;
  seqbot = 0;
  musica = 10;
 }
