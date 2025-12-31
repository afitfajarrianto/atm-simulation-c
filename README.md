# 🏧 Program Simulasi ATM (Bahasa C)

Program **Simulasi ATM berbasis Bahasa C** yang berjalan di terminal (console).  
Project ini mensimulasikan fitur ATM pada umumnya seperti **autentikasi PIN, setoran tunai, penarikan tunai, transfer dana, dan cek saldo**.

Project ini dibuat sebagai **latihan logika pemrograman**, **struktur program C**, serta **portofolio GitHub**.

---

## ✨ Fitur Utama

🔐 **Autentikasi PIN**
- Verifikasi PIN pengguna
- Maksimal 3 kali percobaan
- Kartu diblokir jika PIN salah 3 kali

💰 **Manajemen Saldo**
- Saldo awal: Rp1.000.000
- Setoran tunai
- Penarikan tunai
- Informasi cek saldo

🏦 **Menu Penarikan Cepat**
- Rp100.000
- Rp500.000
- Rp1.000.000
- Rp1.500.000
- Rp2.000.000
- Rp2.500.000

🔁 **Transaksi Lainnya**
- Transfer dana (dengan biaya admin)
- Penarikan tunai nominal bebas
- Informasi saldo

✅ **Validasi Transaksi**
- Penarikan dan transfer tidak dapat melebihi saldo
- Saldo tidak akan menjadi minus

🎨 **Tampilan Console**
- Banner ASCII
- Menu rapi dan mudah dipahami

---

## 🛠️ Teknologi yang Digunakan

- **Bahasa Pemrograman:** C
- **Compiler:** GCC
- **Platform:** Linux / Windows / macOS
- **Antarmuka:** Command Line Interface (CLI)

---

## 📂 Struktur Folder

```bash
.
├── main.c      # Program utama
├── atm.c       # Logika dan menu ATM
├── atm.h       # Header file
└── README.md   # Dokumentasi project
