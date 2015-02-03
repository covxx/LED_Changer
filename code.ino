//LED_Cube_Code @covxx
//This isn't optimized for multible LEDs, that needs to be done

int lED=13; //makes led a variable for pin 13

void setup() {
	pinMode (LED, OUTPUT);
}

void loop () {
	digitalWrite(LED, HIGH); //sets pin13 voltage 5v (turns on the LED)
	delay(2000); //odelay in ms (2 seconds)
	digitalWrite(LED, LOW);  //sets pin voltage to 0(turns off LED)
}
