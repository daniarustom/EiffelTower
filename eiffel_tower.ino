int short_time_of_delay = 300;
int reg_time_of_delay = 700;
int long_time_of_delay = 2000;
int bottom_first_square = 2;
int top_first_square = 3;
int bottom_second_square = 4;
int top_second_square = 5;
int bottom_third_square = 6;
int top_third_square = 7;
int bottom_fourth_square = 8;
int top_fourth_square = 9;




void setup()
{
  pinMode(bottom_first_square, OUTPUT);
  pinMode(top_first_square, OUTPUT);
  pinMode(bottom_second_square, OUTPUT);
  pinMode(top_second_square, OUTPUT);
  pinMode(bottom_third_square, OUTPUT);
  pinMode(top_third_square, OUTPUT);
  pinMode(bottom_fourth_square, OUTPUT);
  pinMode(top_fourth_square, OUTPUT);
}

void loop()
{
  digitalWrite(bottom_first_square, HIGH);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, HIGH);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, HIGH);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, HIGH);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, HIGH);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, HIGH);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, HIGH);
  digitalWrite(top_fourth_square, LOW);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, HIGH);
  delay(reg_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
  
  digitalWrite(bottom_first_square, HIGH);
  digitalWrite(top_first_square, HIGH);
  digitalWrite(bottom_second_square, HIGH);
  digitalWrite(top_second_square, HIGH);
  digitalWrite(bottom_third_square, HIGH);
  digitalWrite(top_third_square, HIGH);
  digitalWrite(bottom_fourth_square, HIGH);
  digitalWrite(top_fourth_square, HIGH);
  delay(long_time_of_delay);
  digitalWrite(bottom_first_square, LOW);
  digitalWrite(top_first_square, LOW);
  digitalWrite(bottom_second_square, LOW);
  digitalWrite(top_second_square, LOW);
  digitalWrite(bottom_third_square, LOW);
  digitalWrite(top_third_square, LOW);
  digitalWrite(bottom_fourth_square, LOW);
  digitalWrite(top_fourth_square, LOW);
  delay(short_time_of_delay);
}
