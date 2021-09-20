int kirmiziPin=9;
int yesilPin=10;
int maviPin=11;
void setup() {
 pinMode(kirmiziPin,OUTPUT);
 pinMode(yesilPin,OUTPUT);
 pinMode(maviPin,OUTPUT);
}
void loop() {
 renkAyarla(255,0,0);
 delay(1500);
 renkAyarla(0,255,0);
 delay(1500);
 renkAyarla(0,0,255);
 delay(1500);
 renkAyarla(255,255,0);
 delay(1500);
 renkAyarla(80,0,80);
 delay(1500);
 renkAyarla(0,255,255);
 delay(1500);
 renkAyarla(255,255,255);
 delay(1500);
}
void renkAyarla(int kirmizi,int yesil, 
int mavi)
{
 kirmizi=255-kirmizi;
 yesil=255-yesil;
 mavi=255-mavi;
 analogWrite(kirmiziPin,kirmizi);
 analogWrite(yesilPin,yesil);
 analogWrite(maviPin,mavi);
}