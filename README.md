# `C-Algorithm-and-Struct-Examples

# 📘 C Programlama Uygulamaları – Dizi İşlemleri ve Struct Kullanımı

Bu proje, **C programlama dili** kullanılarak yazılmış üç temel örnek içerir.  
Amaç, algoritma analizini (T(n) hesaplama), dizi işlemlerini ve `struct` yapısını öğrenmektir.

---

## 📂 İçindekiler
1. [search.c](#1-dizi-içinde-arama---searchc) – Dizi içinde eleman arama  
2. [min_element.c](#2-dizide-en-küçük-elemanı-bulma---min_elementc) – Dizideki en küçük sayıyı bulma  
3. [ogrenci_struct.c](#3-öğrenci-bilgilerini-struct-ile-tutma---ogrenci_structc) – Struct ile öğrenci bilgilerini depolama  

---

## 🧠 1. Dizi içinde arama - `search.c`

### 📄 Açıklama:
Girilen bir dizide, kullanıcı tarafından belirtilen bir sayıyı arar.  
Lineer (doğrusal) arama algoritması kullanılmıştır.

### ⚙️ Algoritma:
- Dizinin her elemanı sırayla kontrol edilir.
- Eşleşme bulunduğunda döngü durur.
- Eşleşme yoksa -1 döner.

### ⏱️ Zaman Karmaşıklığı (T(n)):
- **En iyi durum:** O(1) → Aranan eleman ilk sıradadır.  
- **Ortalama durum:** O(n/2) ≈ O(n)  
- **En kötü durum:** O(n) → Eleman yok veya son sıradadır.  

---

## 🔍 2. Dizide en küçük elemanı bulma - `min_element.c`

### 📄 Açıklama:
Girilen dizideki **en küçük sayıyı** bulan programdır.  
Dizinin tüm elemanlarını sırayla karşılaştırır.

### ⚙️ Algoritma:
- İlk eleman `min` olarak alınır.
- Her eleman `min` ile karşılaştırılır.
- Daha küçük bulunursa `min` güncellenir.

### ⏱️ Zaman Karmaşıklığı (T(n)):
- Her durumda dizi baştan sona taranır.  
- **T(n) = n - 1 → O(n)**  
(En iyi, ortalama ve en kötü durum aynıdır.)

---

## 🎓 3. Öğrenci bilgilerini struct ile tutma - `ogrenci_struct.c`

### 📄 Açıklama:
5 öğrencinin **isim, soyisim, numara ve adres** bilgilerini saklar.  
`struct` yapısı kullanılarak düzenli veri depolama sağlanır.

### ⚙️ Program Akışı:
1. Kullanıcıdan 5 öğrencinin bilgileri alınır.  
2. Bilgiler `struct ogrenci` dizisine kaydedilir.  
3. Tüm bilgiler ekrana yazdırılır.

### 🧱 Kullanılan Yapı:
```c
struct ogrenci {
    char isim[50];
    char soyisim[50];
    int numarasi;
    char adresi[100];
};
