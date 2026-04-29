#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// ==========================================
// DEKLARASI PIN
// ==========================================
#define PIN_TRIG    7
#define PIN_ECHO    6
#define PIN_LDR     A0
#define PIN_LED     9    // Harus pin PWM
#define PIN_BUZZER  10   // Harus pin PWM
#define PIN_BUTTON  2    // Harus pin 2 atau 3 untuk Interrupt eksternal di Uno

// ==========================================
// INISIALISASI LCD I2C
// ==========================================
// Alamat I2C umumnya 0x27 atau 0x3F untuk LCD 16x2
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// ==========================================
// VARIABEL GLOBAL
// ==========================================
// Variabel volatile karena diubah di dalam fungsi Interrupt
volatile bool isMuted = false; 

// Variabel untuk non-blocking buzzer
unsigned long previousMillis = 0;
bool buzzerState = false;

void setup() {
  // Inisialisasi Serial Komunikasi
  Serial.begin(9600);

  // Pengaturan Pin
  pinMode(PIN_TRIG, OUTPUT);
}