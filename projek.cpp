#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

// Struct untuk Detail Kategori Tiket
struct KategoriTiket {
    string namaKelas; 
    int harga;
    int sisaTiket;
};

// Struct utama untuk Data Pertandingan
struct Pertandingan {
    int id;
    string timHome;
    string timAway;
    string stadion;
    string tanggal;
    string jam;
    KategoriTiket kelas[3]; 
};

// Node untuk Single Linked List (Manajemen Jadwal Pertandingan) dengan Head-Tail
struct NodePertandingan {
    Pertandingan data;
    NodePertandingan* next;
};

// Struct untuk Data Pesanan Tiket (Transaksi)
struct Pesanan {
    string kodeBooking;
    string namaPemesan;
    string nomorHp;
    int idPertandingan;
    string detailMatch;
    string kelasDipilih;
    int jumlahTiket;
    int totalHarga;
    string metodeBayar;
    string statusBayar; // PENDING, LUNAS, KADALUARSA
};

// Node untuk Double Linked List (Manajemen Antrean/Riwayat Pesanan) dengan Head-Tail
struct NodePesanan {
    Pesanan data;
    NodePesanan* next;
    NodePesanan* prev;
};
