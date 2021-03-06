void setup()
{
DDRB |= _BV(PB5);  // pin 11
TCCR1A=0;
TCCR1B=0;
TCCR1A |= _BV(WGM11);
TCCR1B |= _BV(WGM13)|_BV(CS10);
OCR1A = 200;
ICR1=500;
TCCR1A |= _BV(COM1A1);

DDRE |= _BV(PE3); //pin5
TCCR3A=0;
TCCR3B=0;
TCCR3A |= _BV(WGM31);
TCCR3B |= _BV(WGM33)|_BV(CS30);
OCR3A = 450;
ICR3=500;
TCCR3A |= _BV(COM3A1);

DDRH |= _BV(PH3);          // pin 6
TCCR4A=0;
TCCR4B=0;
TCCR4A |= _BV(WGM41);
TCCR4B |= _BV(WGM43)|_BV(CS40);
OCR4A = 470;
ICR4=500;
TCCR4A |= _BV(COM4A1);

DDRL |= _BV(PL3);  // pin 46
TCCR5A=0;
TCCR5B=0;
TCCR5A |= _BV(WGM51);
TCCR5B |= _BV(WGM53)|_BV(CS50);
OCR5A = 500;
ICR5=500;
TCCR5A |= _BV(COM5A1);
}

void loop() {

}
