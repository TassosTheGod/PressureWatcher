 # General plan 
 * plan 0 ο αισθητηρας στέλνει απλά την πίεση  
 * ο αισθητηρας καταλαβαίνει την πτώση πίεσης (όταν θα σταματήσει το πότισμα, όταν ξεκινά το πότισμα, και σε περίπτωση που κλέβουν το νερό του ποτίσματος)  
 * όταν καταλαβαίνει την πτώση πίεσης για 15%(μεταβλητή) του ποτισματος να στέλνει μηνύματα στον ιδιοκτήτη  
 * θα δουλεύει με μπαταρίες  
 * στέλνει SMS ο αγρότης για το πότε θα ελέγχει την πίεση αλλιώς θα είναι κλειστό-Read pressure στο github -  
 * 2ο target μια εφαρμογή - site για την πίεσης  


## Water Pressure sensor

30 psi （NO.30）
Input: 0-30 psi.
Output: 0.5V – 4.5V linear voltage output. 0 psi outputs 0.5V, 15psi outputs 2.5V, 30 psi outputs 4.5V.
Accuracy: within 2% of reading (full scale).
Thread: 1/8”-27 NPT.
Wiring connector: water sealed quick disconnect. Mating connector is included.
Wiring: Red for +5V. Black for ground. Blue for signal output.

*********

Platform.io να έχω για να γράψω κανονική c για να μην έχω τις μετατοτροπες της python  
*  η adc της πλακέτας έχει 3.3volt αντοχή ενω ο αισθητηρας έχει 5volt  
* να βάλω spi (αλλά δεν ξέρω άμα θα μπορεί να μπει σε βαθύ ύπνο)