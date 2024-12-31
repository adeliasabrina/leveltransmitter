Penjelasan Program:
sensorPin: Mendefinisikan pin analog yang digunakan untuk membaca tegangan dari resistor.
resistorValue: Nilai resistor yang digunakan untuk mengonversi arus menjadi tegangan.
minCurrent dan maxCurrent: Rentang arus dari level transmitter.
minLevel dan maxLevel: Rentang level yang diukur oleh level transmitter.
analogRead(sensorPin): Membaca nilai dari pin analog.
voltage: Mengonversi nilai analog menjadi tegangan.
current: Mengonversi tegangan menjadi arus.
level: Mengonversi arus 4-20mA menjadi level yang sesuai menggunakan fungsi map.
Program ini akan membaca sinyal 4-20mA, mengonversinya menjadi tegangan, kemudian mengonversi tegangan menjadi nilai level yang sesuai. Hasilnya akan ditampilkan di Serial Monitor.
