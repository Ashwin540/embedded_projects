#include <reg51.h>

#define bus P2

sbit rs = P3^4;
sbit en = P3^5;
sbit fire = P0^0;
sbit gas = P0^1;
sbit buzzer = P0^2;

void config();
void delay(unsigned int i);
void cmd(unsigned char b);
void dat(unsigned char a);
void str(unsigned char a[20]);
void gascheck();
void firecheck();

void main() {
	config();
	cmd(0x01);
	cmd(0x80);
	str("industrial monitor");
	cmd(0xC0);
	str("system");
	delay(2000);

	while(1) {
		firecheck();
		delay(1000);
		gascheck();
		delay(1000);
	}
}

void firecheck() {
	if(fire == 0) {
		cmd(0x01);
		cmd(0x80);
		str("fire detected");
		buzzer = 1;
		delay(1000);
	} else {
		cmd(0x01);
		cmd(0x80);
		str("no fire");
		buzzer = 0;
		delay(1000);
	}
}

void gascheck() {
	if(gas == 0) {
		cmd(0x01);
		cmd(0x80);
		str("gas detected");
		buzzer = 1;
		delay(1000);
	} else {
		cmd(0x01);
		cmd(0x80);
		str("no gas");
		buzzer = 0;
		delay(1000);
	}
}

void str(unsigned char a[]) {
	unsigned char i;
	for(i = 0; a[i] != '\0'; i++) {
		dat(a[i]);
	}
}

void config() {
	cmd(0x38);
	cmd(0x01);
	cmd(0x0C);
	cmd(0x06);
	cmd(0x80);
}

void cmd (unsigned char b) {
	bus = b;
	rs = 0;
	en = 1;
	delay(10);
	en = 0;
}

void dat(unsigned char a) {
	bus = a;
	rs = 1;
	en = 1;
	delay(10);
	en = 0;
}

void delay(unsigned int i) {
	unsigned int j;
	for(; i > 0; i--)
		for(j = 0; j < 1275; j++);
}
