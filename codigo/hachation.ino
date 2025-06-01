  unsigned long tempo ;
  float temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,tempoo,tempooo;
  int pres1=1,pres2=1,pres3=1,pres4=1,pres5=1,m_pressao,flag=0;
  void setup() {
    pinMode(13,INPUT);
    pinMode(12,INPUT);
    pinMode(11,INPUT);
    pinMode(10,INPUT);
    pinMode(9,INPUT);
    pinMode(8,INPUT);
    pinMode(7, INPUT); // Configura pino 8 como entrada e habilita pull up interno;
    Serial.begin(9600);
    // put your setup code here, to run once:
  
  }
  
  void loop() {
    int intervalo=0,repeticoes=0,acabou=0,medio=0,volume=0; 
  
    while(digitalRead(7) == HIGH) {
      flag=1;
      tempo = millis();
      
      if(digitalRead(8)>0){
        m_pressao=966;
        temp6=temp6+1;
      }else{
        if(digitalRead(9)>0){
          temp5=temp5+1; 
          m_pressao=960;
        }else{
          if(digitalRead(10)>0){
            temp4=temp4+1;
            m_pressao=955;
          }else{
            if(digitalRead(11)>0){
              temp3=temp3+1;
              m_pressao=953;
            }else{
              if(digitalRead(12)>0){
                temp2=temp2+1;
                m_pressao=950;
              }else{
                temp1=temp1+1;
                m_pressao=945;
              }
              
            }
          }
        }
       }
  
      delay(50);
      tempoo=millis();
      Serial.println(digitalRead(7));
      intervalo=tempoo-tempo + intervalo;
      repeticoes= repeticoes + 1;
  
    }
  
    delay(2000);
    medio=intervalo/repeticoes;
    temp1=temp1*medio/1000;
    temp2=temp2*medio/1000;
    temp3=temp3*medio/1000;
    temp4=temp4*medio/1000;
    temp5=temp5*medio/1000;
    temp6=temp6*medio/1000;
  
    if(temp6>0){
      tempooo=temp6;
    }else{
      if(temp5>0){
        tempooo=temp5;
      }else{
        if(temp4>0){
          tempooo=temp4;
        }else{
          if(temp3>0){
            tempooo=temp3;
          }else{
            if(temp2>0){
              tempooo=temp2;
            }else{
              tempooo=temp1;
            }
          }
        }
      }
    }
  
    if(flag==1){
  
      Serial.print("tempo em 1: ");
      Serial.println(temp1,2);
      Serial.print("tempo em 2: ");
      Serial.println(temp2,2);
      Serial.print("tempo em 3: ");
      Serial.println(temp3,2);
      Serial.print("tempo em 4: ");
      Serial.println(temp4,2);
      Serial.print("tempo em 5: ");
      Serial.println(temp5,2);
      Serial.print("tempo em 6: ");
      Serial.println(temp6,2);
    
        
     
         
      Serial.print("Sua maior pressao obtida foi de: ");
      Serial.print(m_pressao);
      Serial.println("hPa");
      Serial.print("voce manteve ela por ");
      Serial.print(tempooo,2);
      Serial.println(" segundos");
      
      //volume=(temp1*pres1+temp2*pres2+temp3*pres3+temp4*pres4+temp5*pres5);
      //Serial.println(volume);
      delay(1000);
    }
    
      temp1=0;
      temp2=0;
      temp3=0;
      temp4=0;
      temp5=0;
      temp6=0;
      flag=0;
  }
  
