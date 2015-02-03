//LED_Cube_Code @covxx
//This isn't optimized for multible LEDs, that needs to be done

int led=13; //makes led a variable for pin 13

void setup() {
	pinMode (led, OUTPUT);
}

void loop () {
	digitalWrite(led, HIGH); //sets pin13 voltage 5v (turns on the LED)
	delay(2000); //delay in ms (2 seconds)
	digitalWrite(led, LOW);  //sets pin voltage to 0(turns off LED)
        delay(2000);
}
