

		AREA    MyCode, CODE, READONLY
		ENTRY	 
		EXPORT Insertion_sort

; Insertion sort

Insertion_sort

				 IMPORT main
				 LDR     R0, =main
                 BLX     R0


STOP	B STOP
		ALIGN
		END
			