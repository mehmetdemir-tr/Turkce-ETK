# ⌨️ Türkçe-ETK (Elektronik Teknik Klavyesi)

Türkçe-ETK; elektrik ve elektronik sektöründe çalışan mühendisler, teknisyenler ve öğrenciler için özel olarak tasarlanmış, standart klavyelerin kısıtlamalarını ortadan kaldıran profesyonel bir klavye düzenidir (layout).

## Projenin Hikayesi

> **"11 Şubat günü elektronik atölyesinde öğretmenimiz klavyede bu sembollerin yazılamayacağını söyledi. Ben de buna karşı kendi klavye layout'umu tasarlamaya karar verdim."**

Bu proje; teknik dokümantasyon hazırlarken ($\Omega$, $\mu$, $\int$ gibi) sembolleri sürekli kopyala-yapıştır yapmaktan yorulanlar için bir çözüm ve bir başkaldırı olarak doğmuştur.

## Özellikler

*   **29+ Teknik Sembol:** AltGr katmanına entegre edilmiş, elektrik-elektronik dünyasında en yaygın kullanılan semboller.
*   **Özel Harf Dizilimi:** Kullanıcı deneyimine ve yazım hızına odaklanmış, kişiselleştirilmiş ergonomik harf yerleşimi.
*   **Hızlı Erişim:** Ohm, Delta, İntegral gibi karmaşık karakterlere saniyeler içinde erişim imkanı.
*   **Donanım Uyumluluğu:** Arduino Leonardo ve benzeri HID (Human Interface Device) destekli mikrodenetleyicilerle donanım seviyesinde tak-çalıştır kullanım.

## 📊 Klavye Katmanları

### 1. Ana Katman (Harf Dizilimi)
Kullanıcının yazım alışkanlıklarına göre optimize edilmiş, verimliliği artıran özel Türkçe harf dizilimi.

### 2. AltGr Katmanı (Teknik Semboller)
Elektronikçilerin "İsviçre çakısı" olarak adlandırdığımız bu katmanda yer alan bazı semboller:

| Kombinasyon | Sembol | Açıklama |
| :--- | :---: | :--- |
| **AltGr + U** | $\mu$ | Mikro |
| **AltGr + G** | $\Omega$ | Ohm |
| **AltGr + Ü** | $\int$ | İntegral |
| **AltGr + N** | $\Delta$ | Delta |

## Kurulum ve Kullanım

### Windows İçin
1. `.klc` dosyasını **Microsoft Keyboard Layout Creator** ile açın.
2. `Project` menüsünden `Build DLL and Setup Package` seçeneğine tıklayarak kurulum dosyasını oluşturun.
3. Oluşturulan klasördeki `setup.exe` dosyasını çalıştırarak düzeni sisteminize ekleyin.

### Donanım (Arduino) İçin
Projenin `Arduino` klasöründe yer alan kaynak kodlarını **Arduino Leonardo** kartınıza yükleyerek, donanımı herhangi bir cihazda "Klavye Tercümanı" (Translator) olarak kullanabilirsiniz.

## Geliştirici
**mehmetdemir-tr** tarafından, bir atölye imkansızlığına profesyonel bir çözüm olarak geliştirilmiştir.

> *"Mühendislik, imkansızı standart hale getirmektir."*

## Ekran Görüntüleri:
![Harfler](https://github.com/mehmetdemir-tr/Turkce-ETK/blob/master/screenshots/Turkce-E.jpg)
![AltGr](https://github.com/mehmetdemir-tr/Turkce-ETK/blob/master/screenshots/Turkce-EAltGr.jpg)
![CTRL](https://github.com/mehmetdemir-tr/Turkce-ETK/blob/master/screenshots/Turkce-ECtrl.jpg)
![Shift](https://github.com/mehmetdemir-tr/Turkce-ETK/blob/master/screenshots/Turkce-EShft.jpg)

## Lisans
Bu proje **MIT Lisansı** altında lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasına göz atabilirsiniz.
