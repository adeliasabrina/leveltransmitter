const int sensorPin = A0; // Pin analog yang digunakan untuk membaca tegangan
const float resistorValue = 250.0; // Nilai resistor dalam ohm
const float minCurrent = 4.0; // Arus minimum dalam mA
const float maxCurrent = 20.0; // Arus maksimum dalam mA
const float minLevel = 0.0; // Level minimum yang diukur (misalnya, 0 cm)
const float maxLevel = 100.0; // Level maksimum yang diukur (misalnya, 100 cm)

void setup() {
  Serial.begin(9600); // Memulai komunikasi serial
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Membaca nilai dari pin analog
  float voltage = sensorValue * (5.0 / 1023.0); // Mengonversi nilai analog menjadi tegangan (0-5V)
  float current = voltage / resistorValue * 1000.0; // Mengonversi tegangan menjadi arus (mA)

  // Mengonversi arus 4-20mA menjadi level yang sesuai
  float level = map(current, minCurrent, maxCurrent, minLevel, maxLevel);

  // Menampilkan nilai yang dibaca
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V, Current: ");
  Serial.print(current);
  Serial.print(" mA, Level: ");
  Serial.print(level);
  Serial.println(" cm");

  delay(1000); // Menunggu 1 detik sebelum membaca lagi
}

// Fungsi untuk memetakan nilai dari satu rentang ke rentang lainnya
float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}