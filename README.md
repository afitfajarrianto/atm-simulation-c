# atm-simulation-c
A simple ATM simulation project in C for learning control flow, functions, and file structure.

# 🏧 ATM Simulation Program (C Language)

Program **ATM Sederhana berbasis Bahasa C** yang mensimulasikan proses transaksi perbankan seperti ATM pada umumnya.  
Project ini dibuat untuk **latihan logika pemrograman, kontrol alur, dan portofolio GitHub**.

---

## ✨ Fitur Utama

- 🔐 **Autentikasi PIN**
  - Maksimal 3 kali percobaan
  - Kartu diblokir jika PIN salah

- 💰 **Manajemen Saldo**
  - Saldo awal: Rp1.000.000
  - Setoran tunai
  - Penarikan tunai
  - Cek saldo

- 🏦 **Menu Penarikan Cepat**
  - Rp100.000
  - Rp500.000
  - Rp1.000.000
  - Hingga Rp2.500.000
 
- 🔁 **Transaksi Lainnya**
  - Transfer dana (dengan biaya admin)
  - Penarikan nominal bebas
  - Informasi saldo

- ✅ **Validasi Saldo**
  - Transaksi dibatalkan jika saldo tidak mencukupi
  - Saldo tidak bisa minus

- 🎨 **Tampilan Console Interaktif**
  - Banner ASCII
  - Menu rapi dan jelas

---

## 🛠️ Teknologi yang Digunakan

- Bahasa Pemrograman: **C**
- Compiler: **GCC**
- Sistem Operasi: Linux / Windows / MacOS

---

## 📂 Struktur File

```bash
.
├── main.c      # Program utama
├── atm.c       # Implementasi fungsi ATM
├── atm.h       # Header file
└── README.md   # Dokumentasi project
