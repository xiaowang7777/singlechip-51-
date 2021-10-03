#include "reg52.h"
#include "intrins.h"

#define led P2

sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;
sbit led4 = P2^3;
sbit led5 = P2^4;
sbit led6 = P2^5;
sbit led7 = P2^6;
sbit led8 = P2^7;

void delay(unsigned int i);

void water_lamp();

void led_twinkle();

void water_lamp02();

void main(){
	water_lamp02();
}

// 51单片机--led灯闪烁
void led_twinkle(){
	led1 = 0;
	delay(50000);
	led1 = 1;
	delay(50000);
}

// 51单片机--流水灯01
void water_lamp(){
	while(1){
		led1 = 0;
		led8 = 1;
		delay(50000);
		led2 = 0;
		led1 = 1;
		delay(50000);
		led3 = 0;
		led2 = 1;
		delay(50000);
		led4 = 0;
		led3 = 1;
		delay(50000);
		led5 = 0;
		led4 = 1;
		delay(50000);
		led6 = 0;
		led5 = 1;
		delay(50000);
		led7 = 0;
		led6 = 1;
		delay(50000);
		led8 = 0;
		led7 = 1;
		delay(50000);
	}
}

void water_lamp02(){
	unsigned char i = 0;
	led = 0xfe;
	while(1){
		for(i = 0; i <= 7; i++){
			led = _crol_(led,1);
			delay(50000);
		}
	}
}

void delay(unsigned int i){
	while(i--);
}

