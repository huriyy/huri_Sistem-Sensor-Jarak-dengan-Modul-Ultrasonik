# Sistem Parkir Sensor Jarak dengan Modul Ultrasonik

Sistem peringatan jarak parkir berbasis mikrokontroler menggunakan sensor ultrasonik untuk mendeteksi objek di sekitar kendaraan dan memberikan peringatan visual/audio.

---

## 🛠️ Komponen
* **Mikrokontroler:** Arduino 
* **Sensor Jarak:** Ultrasonic Sensor.
* **Indikator:** Buzzer (Piezzo).
* **Kabel Jumper & Breadboard.**

## 📐 Skema Pin (Default)
| Komponen | Pin Mikrokontroler |
| :--- | :--- |
| Ultrasonic Trig | Pin 7 |
| Ultrasonic Echo | Pin 6 |
| Buzzer | Pin 10 |
| LDR | Pin A0 |
| Button | Pin 2 |
---

## 🚀 Cara Kerja
1.  **Trig Pin** mengirimkan sinyal ultrasonik selama 10 mikrodetik.
2.  **Echo Pin** menerima pantulan sinyal dan menghitung durasi waktu tempuh.
3.  **Jarak** dihitung dengan rumus: $s = \frac{v \times t}{2}$ di mana $v$ adalah kecepatan suara (340 m/s).
4.  **Logika Peringatan:** Buzzer berbunyi
    

---

## 📂 Struktur Folder
```text
├── Dokumentasi/
│   └── video.mp4   
├── sketch.ino    # Kode utama program
└── README.md
```