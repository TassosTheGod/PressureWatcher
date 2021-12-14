 # General plan 
 * ### plan 0
	 * να επιβεβεώσω ότι δουλεύει ο σενσορας (10kΩ και 20kΩ αντιστάσεις)
	 *  ο αισθητηρας στέλνει απλά την πίεση (ή στην κονσόλα να βλέπουμε την πίεση  σε psi)
	 *  να ξυπνάει κάθε x λεπτά και να δείχνει την πίεση στην κονσόλα
 *  ## plan 1
	 *  ο αισθητηρας αποθηκέυει την τελευταία τιμή (αν είναι σε sleep mode θα πρέπει να το αποθηκεύει καπου;) 
	 *  ο αισθητηρας καταλαβαίνει την πτώση πίεσης (όταν θα σταματήσει το πότισμα, όταν ξεκινά το πότισμα, και σε περίπτωση που κλέβουν το νερό του ποτίσματος)  
 *  ## plan 2
	 *  όταν καταλαβαίνει την πτώση πίεσης για 15%(μεταβλητή) του ποτισματος να στέλνει μηνύματα στον ιδιοκτήτη  
 * ## plan 3
	 * θα δουλεύει με μπαταρίες  
	 * στέλνει SMS ο αγρότης για το πότε θα ελέγχει την πίεση αλλιώς θα είναι κλειστό -Read pressure στο github - , και κάθε 12 ώρες θα ξυπνάει
 * ## plan 4
	 * 2ο target μια εφαρμογή - site για την πίεσης  - σύνδεση με raspberry pi ?


## Schedules
Πότε θα ξυπνάει για sms;;
Πότε να ελέγχει τις πιέσεις του νερού;;

# Sensors
## Water Pressure sensor

30 psi （NO.30）
Input: 0-30 psi.
Output: 0.5V – 4.5V linear voltage output. 0 psi outputs 0.5V, 15psi outputs 2.5V, 30 psi outputs 4.5V.
Accuracy: within 2% of reading (full scale).
Thread: 1/8”-27 NPT.
Wiring connector: water sealed quick disconnect. Mating connector is included.
Wiring: Red for +5V. Black for ground. Blue for signal output.

*******
|[Voltage Dividers](https://learn.sparkfun.com/tutorials/voltage-dividers) |
[i want to map analog pins on 5volt between 0 to 1023 (10 bit resolution) - ESP32 Forum](https://www.esp32.com/viewtopic.php?t=5397)|
[ESP32 Analog Input with Arduino IDE | Random Nerd Tutorials](https://randomnerdtutorials.com/esp32-adc-analog-read-arduino-ide/) |
[ESP32 ADC Tutorial - Read Analog Voltage in Arduino – DeepBlue](https://deepbluembedded.com/esp32-adc-tutorial-read-analog-voltage-arduino/)

*********

### Random stuff

Platform.io να έχω για να γράψω κανονική c για να μην έχω τις μετατοτροπες της python  
* η adc της πλακέτας έχει 3.3volt αντοχή ενω ο αισθητηρας έχει 5volt  
* να βάλω spi (αλλά δεν ξέρω άμα θα μπορεί να μπει σε βαθύ ύπνο)