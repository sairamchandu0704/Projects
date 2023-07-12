int led[14]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};
void setup() {
for(i=0;i<14,i++){
  pinMode(i,OUTPUT);
}
}
void loop()
{
for(int i=0;i<10;i++) 
{
switch(i)
{
case 0:
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,LOW); //0
      digitalWrite(A2,HIGH);
      digitalWrite(A3,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(A5,HIGH);

break;

case 1: 
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW); //1
      digitalWrite(A2,LOW);
      digitalWrite(A3,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(A5,LOW);

break;

case 2: 
digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH); //2
      digitalWrite(A2,HIGH);
      digitalWrite(A3,HIGH);
      digitalWrite(A4,LOW);
      digitalWrite(A5,HIGH);

break;

case 3: 

      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH); //3
      digitalWrite(A2,HIGH);
      digitalWrite(A3,HIGH);
      digitalWrite(A4,LOW);
      digitalWrite(A5,HIGH);

break; 

case 4: 

      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH); //4
      digitalWrite(A2,LOW);
      digitalWrite(A3,LOW);
      digitalWrite(A4,HIGH);
      digitalWrite(A5,HIGH);

break;

case 5:
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH); //5
      digitalWrite(A2,HIGH);
      digitalWrite(A3,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(A5,LOW);

break; 

case 6: 
    digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH); //6
      digitalWrite(A2,LOW);
      digitalWrite(A3,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(A5,HIGH);

break;

case 7: 
 digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW); //7
      digitalWrite(A2,HIGH);
      digitalWrite(A3,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(A5,HIGH); 
break;

case 8: 

      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH); //8
      digitalWrite(A2,HIGH);
      digitalWrite(A3,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(A5,HIGH);
      

break;

case 9: 

      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH); //9
      digitalWrite(A2,HIGH);
      digitalWrite(A3,LOW);
      digitalWrite(A4,HIGH);
      digitalWrite(A5,HIGH);
       

break; 
}
for(int j=0;j<10;j++) 
{
switch(j)
{
case 0:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW); //0
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(500); 
break;

case 1: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW); //1
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(500); 
break;

case 2: 
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH); //2
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      delay(500); 
break;

case 3: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH); //3
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      delay(500); 
break; 

case 4: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH); //4
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(500);  
break;

case 5: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH); //5
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(500);
break; 

case 6: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH); //6
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(500); 
break;

case 7: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW); //7
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      delay(500); 
break;

case 8: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH); //8
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(500);  
break;

case 9: 
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH); //9
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(500);
break; 


}
} 

} 
}
