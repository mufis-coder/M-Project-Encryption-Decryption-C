# Aplikasi Enkripsi dan Dekripsi menggunakan Bahasa C

Berikut adalah repositori untuk menyimpan aplikasi enkripsi-dekripsi saya. Aplikasi ini adalah hasil dari penasaran saya ketika saya maba semester 1. Waktu itu saya bertanya apakah saya bisa membuat enkripsi dan dekripsinya di mana tiap hurufnya bisa berubah menjadi lebih dari satu huruf. Contohnya: huruf a dapat berubah menjadi a,b,c,d dll. Sehingga diharapkan dengan begitu enkripsi yang terbuat bisa semakin susah untuk dipecahkan.

Untuk menjalankan aplikasi ini bisa menggunakan dev c++ atau vs code, jika menggunakan vscode dan sudah menginstall gcc, bisa menggunakan tutorial berikut untuk menjalankannya: https://github.com/mufis-coder/tips-tricks-code/tree/main/Run-app

Catatan tiap versi:

- [Versi 1.0.0](https://github.com/mufis-coder/M-Project-Encryption-Decryption-C/tree/master/Encryption-Decryption-1.0.0): Pada versi ini telah bisa setiap huruf terenkripsi menjadi beberapa huruf yang berbeda, tetapi kekurangannya harus ada payload ("tanda.txt") yang harus di-passing antara aplikasi enkripsi dan dekripsi. Sehingga, masih ada celah untuk dipecahkan.

- [Versi 2.0.0](https://github.com/mufis-coder/M-Project-Encryption-Decryption-C/tree/master/Encryption-Decryption-2.0.0): Pada versi ini, ada peningkatan dari versi 1.0.0, di mana pada versi ini sudah tidak diperlukan sebuah payload ("tanda.txt") untuk mengantarkan data antara aplikasi enkripsi dan dekripsi (kedua aplikasi berdiri secara independen). Akan tetapi, masih ada kekurangan di mana rumus untuk enkripsi dan dekripsi dibuat secara statis.

- [Versi 3.0.0](https://github.com/mufis-coder/M-Project-Encryption-Decryption-C/tree/master/Encryption-Decryption-3.0.0): Pada versi ini, telah ada peningkatan dari versi 2.0.0, di mana rumus enkripsi dan dekripsi tidak dibuat secara statik. Tetapi enkripsi masih untuk huruf kecil.

- Versi 4.0.0: Pada versi ini, telah ada peningkatan dari versi 3.0.0, di mana enkripsi telah berlaku untuk huruf kapital dan huruf kecil.