module Ejercicios where

-- **************************************************** Tema 2 - Descripcion formal en Haskell (II) *******************************************************************************************************************


-- ****************************************************************** Ejercico 1 TAD Boolean *************************************************************************************************************


data Boolean = T | F deriving (Eq, Show)

-- Términos Sintácticos:
t1Boolean = not' (not' (or' T (and' F (not' F))))
t2Boolean = and' t1Boolean F

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

not' :: Boolean -> Boolean
not' T = F
not' F = T

and' :: Boolean -> Boolean -> Boolean
and' T b = b
and' F b = F

or' :: Boolean -> Boolean -> Boolean
or' T b = T
or' F b = b





-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 2. TAD Bool3 *****
-- ******************************************************************
-- ******************************************************************

data Bool3 = T'' | F'' | M'' deriving (Eq, Show)

-- Términos Sintácticos:
not3 :: Bool3 -> Bool3 
not3 T' = F'
not3 F' = T'
not3 M 	= M

and3 :: Bool3 -> Bool3 -> Bool3
and3 T'   x = x
and3 F'   x = F'
and3 M   b = if(b==T')then M 
			  else F'
			 
or3 :: Bool3 -> Bool3 -> Bool3
or3 T' T' = T'
or3 F' F' = F'
or3 T' M = T'
or3 M T' = T'
or3 F' M = M
or3 M F' = M
or3 x  y  = not3(and3 x y)



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

and3'::bool->bool->bool
and3' T'' T'' = T''
and3' T'' F'' = F''
and3' F'' T'' = F''
and3' F'' F'' = F''
and3' T'' M'' = M''
and3' F'' M'' = F''

or3'::bool->bool->bool
or3' T'' T'' = T''
or3' T'' F'' = T''
or3' F'' T'' = T''
or3' F'' F'' = F''
or3' T'' M'' = T''
or3' F'' M'' = M''

not3'::bool->bool
not3' T''= F''
not3' F''= T''
not3' M''= M''



----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 3. TAD NAT *******
-- ******************************************************************
-- ******************************************************************

data NAT = Cero | Suc NAT deriving (Show, Eq, Ord)

-- Términos Sintácticos:
unoNat = Suc Cero
dosNat = Suc unoNat
tresNat = Suc dosNat
cuatroNat = Suc tresNat
cincoNat = Suc cuatroNat
otroNAT = toInt (sumaNAT (toNAT 30) (toNAT 5))

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------- OPERACIONES (EJEMPLOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

igualNAT :: NAT -> NAT -> Bool
igualNAT Cero Cero = True
igualNAT _ Cero = False
igualNAT Cero _ = False
igualNAT (Suc n) (Suc m) = igualNAT n m

sumaNAT :: NAT -> NAT -> NAT
sumaNAT Cero n = n
sumaNAT (Suc n) m = Suc (sumaNAT n m)

toInt :: NAT -> Int
toInt Cero = 0
toInt (Suc x) = 1 + toInt x

toNAT :: Int -> NAT
toNAT 0 = Cero
toNAT x = Suc (toNAT (x-1))

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
{-
data NAT' = Cero''|x''|y'' deriving show

mayor'::NAT'->NAT'->NAT'
mayor' Cero'' Cero'' = Cero'' --al ser cero el mayor es el mismo
mayor' if (Cero''>x'') then Cero''
					   else x''  --condicion s x es menor que cero (numeros negativos)
mayor' Cero'' x'' = x'' --cualquier numero positivo sera mayor que cero 
mayor' x'' Cero''= x''



restaPositiva':: NAT->NAT->NAT
restaPositiva' Cero'' Cero'' = Cero'' --caso neutro todo cero
restaPositiva' x'' Cero'' = x''
restaPositiva'' if (x''>y'') then  restaPositiva'' x''y''
								else error "error negativo"


multiplicacion'::NAT->NAT->NAT
multiplicacion' Cero'' Cero'' = Cero''
multiplicacion' Cero'' x'' = Cero''
multiplicacion' if(x''<Cero) then multiplicacion' x''*y''
							else if (y''> Cero) then multiplicacion' x'' * y''
							else 				Cero''

-}
--En proceso

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

restaNAT :: NAT -> NAT -> NAT
restaNAT Cero Cero = Cero
restaNAT Cero x = error "resto negativo"
restaNAT x Cero = x
restaNAT (Suc x) (Suc y) = restaNAT x y

divisionNAT :: NAT -> NAT -> NAT
divisionNAT x Cero = error "Indeterminado"
divisionNAT Cero x = Cero
divisionNAT x y = if (igualNAT x y) then (Suc Cero)
					else if (menorNAT x y) then Cero
					else sumaNAT (Suc Cero)
								(divisionNAT (restaNAT x y ) y)



menorNAT :: NAT -> NAT -> Bool
menorNAT Cero x = True 
menorNAT x Cero = False
menorNAT (Suc x) (Suc y) = menorNAT x y











-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************
-- **************************************************** Tema 3 - Entregable I + Ejercicios en Haskell *****************************************************************************************************************


-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 1. TAD Conjunto **
-- ******************************************************************
-- ******************************************************************

-- Operaciones Generadoras No Libres
data Conjunto a = Vacio | CNV a (Conjunto a)

-- Suponemos que los conjuntos sobre los que operamos están 
-- en forma normal (no hay elementos repetidos). Para esto
-- es necesario suponer que los elementos pueden compararse 
-- con == (o no tendría sentido el concepto de "elemento repetido").
-- Los conjuntos devueltos también los dejaremos así.

-- Términos Sintácticos:
t1Conjunto = CNV 5 (CNV 4 (CNV 3 Vacio))
t2Conjunto = CNV 4 (CNV 5 (CNV 3 (CNV 1 Vacio)))

-- Sobreescritura de Eq:
instance (Eq a) => Eq (Conjunto a) where
   s == t  = (incluidoConjunto s t) && (incluidoConjunto t s) 	
				               	       
-- Sobreescritura de Show
instance (Show a) => Show (Conjunto a) where 
   show s     = "{"++ showelemConjunto s ++ "}"
     
showelemConjunto :: (Show a)=> Conjunto a -> String
showelemConjunto Vacio = ""
showelemConjunto (CNV i Vacio) = show i
showelemConjunto (CNV i s) = show i ++ ", " ++ showelemConjunto s

-- Axiomas de Equivalencia:
fnConjunto :: (Eq a) => Conjunto a -> Conjunto a
fnConjunto Vacio = Vacio
fnConjunto (CNV i s) = if perteneceConjunto i s then fnConjunto s else CNV i (fnConjunto s)

---------------------------
-- OPERACIONES (EJERCICIOS):
---------------------------

perteneceConjunto :: (Eq a) => a -> Conjunto a -> Bool
perteneceConjunto i Vacio 	     =  False
perteneceConjunto i (CNV j s)   =  (i == j) || perteneceConjunto i s

esVacioConjunto :: Conjunto a -> Bool
esVacioConjunto Vacio = True
esVacioConjunto (CNV i s) = False

elementosConjunto  :: (Eq a) => Conjunto a -> Int
elementosConjunto Vacio = 0
elementosConjunto (CNV i s) = 1 + elementosConjunto s

unionConjunto, unionConjunto' :: (Eq a) => Conjunto a -> Conjunto a -> Conjunto a
unionConjunto s1 s2 = fnConjunto (unionConjunto' s1 s2)  -- quita elementos repetidos de la unión
unionConjunto' s Vacio = s
unionConjunto' s (CNV i t) = CNV i (unionConjunto s t)

interseccionConjunto :: (Eq a) => Conjunto a  -> Conjunto a -> Conjunto a
interseccionConjunto s Vacio = Vacio
interseccionConjunto s (CNV i t) = if perteneceConjunto i s
			          	       then CNV i (interseccionConjunto s t)
			          	       else interseccionConjunto s t

extraeConjunto :: (Eq a) => a -> Conjunto a -> Conjunto a
extraeConjunto i Vacio = Vacio
extraeConjunto i (CNV j s) = if i == j  
			             then s  -- suponemos que no está mas veces
			             else CNV j (extraeConjunto i s) 
						 
restaConjunto :: (Eq a) => Conjunto a   -> Conjunto a -> Conjunto a
restaConjunto s Vacio = s
restaConjunto s (CNV i t) = if perteneceConjunto i s
		                then extraeConjunto i (restaConjunto s t)
		                else restaConjunto s t		                

sumaConjunto :: Conjunto Int -> Int
sumaConjunto Vacio = 0
sumaConjunto (CNV i s) = i + sumaConjunto s

incluidoConjunto :: (Eq a) => Conjunto a -> Conjunto a -> Bool
incluidoConjunto s t = esVacioConjunto (restaConjunto s t)

igualesConjunto :: (Eq a) => Conjunto a -> Conjunto a -> Bool
igualesConjunto s t = (incluidoConjunto s t) && (incluidoConjunto t s)



-- ***************************************************************************
-- ***************************************************************************
-- ************************************* Ejercicio 2. ENTREGABLE DE ESTE AÑO *
-- ***************************************************************************
-- ***************************************************************************
data Bool5 = TRUE Int deriving (Show, Eq, Ord)
fnBool5 :: Bool5 -> Bool5 
fnBool5 (TRUE x) = if (x > 4) then TRUE 4					
					else if (x < 0) then TRUE 0					
					else TRUE x
					
and5 :: Bool5 -> Bool5 -> Bool5
and5 (TRUE x) (TRUE y) = if (x<y) then (fnBool5 (TRUE x))
						else (fnBool5 (TRUE y))



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 3. TAD Bool10 ****
-- ******************************************************************
-- ******************************************************************



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 4. TAD BoolNat ***
-- ******************************************************************
-- ******************************************************************



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 5. TAD Bool5 *****
-- ******************************************************************
-- ******************************************************************



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 6. TAD BoolNat35 *
-- ******************************************************************
-- ******************************************************************











-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- ************************************* EJERCICIOS DE CONTROLES SIN TADS LINEALES ****************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
























-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************
-- *********************************************************************************************** TADS LINEALES *******************************************************************************************************************

-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- *************************************************** LISTAS *************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

-- TAD Lista a. Operaciones Generadoras Libres
-- data Lista a = Nil | Cons a (Lista a)
{-



YA existen en haskell :

Español							Haskell
vacia							[]
el 1							1:[] ==[1]
el 1 y 2						1:(2:[]) == 1:2:[] == [1,2]
la 'a' y la 'b'					'a' : ('b':[]) == 'a':'b':[] == ['a' , 'b']="ab"


sintaxis:
[a]----------->
x  -----------> cualquier lista
[]-------------> vacia
[x]------------>1 solo elemento
[x,y]----------> 2 elementos
(h:t)----------->elemento h cabeza +  el resto cola
(h1:h2:t)--------->primer h1 + segundo h2 + el resto cola 

Unir
elemento  [h1,h2]	 elemento
elemento  [h1:t]	 lista
lista 	e1 ++ e2 	 lista
lista 	e1 ++ [h]	 elemento 


operaciones Predefinadas
head [2,1,3] ---> 2
tail [2,1,3] ---> [1,3]
reverse [2,1,3] -->[3,1,2]
elem 1 [2,1,3] ---> True
[2,1,3] !! 2 --> 3 (indice 2 del array)


-}





-- Términos Sintácticos
t1lista = [3,5,2,4,8,9,23,6]
t2lista = [1,2,3,4,5,6,7,8]

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): SOLUCIONES
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
{-
-- Devuelve si una lista esta vacia
vacia :: [a] -> Bool
vacia [] = True
vacia _ = False		


			
-- Devuelve la cabeza de una lista					
cabeza :: [a] -> a 		-- predefinida en haskell como head
cabeza [] = error "Lista Vacia" 
cabeza (h: _) = h



-- Devuelve la cola de una lista
cola :: [a] -> [a]		-- predefinida como tail
cola [] = error "Lista Vacia"
cola (_ : t) = t



-- Retorna la longitud de una lista
longitudL :: [a] -> Int -- predefinida como lenght
longitudL [] = 0
longitudL (h:t) = 1 + longitudL t

--- longitud s = if (vacia s) then 0 else 1 + longitud (cola s) -- otra forma, con sólo una regla (como se haría, por ejemplo, en Java):



-- Concatena dos listas
concatenaL :: [a] -> [a] -> [a] -- predefinida como ++ (infijo)
concatenaL [] s = s
concatenaL (h:t) s = h : concatenaL t s		-- (h:t) ++ s



-- Retorna la lista de partida con sus elementos dispuestos en orden inverso.
inversaL :: [a] -> [a] -- predefinida como reverse
inversaL [] = []
inversaL (h:t) = concatenaL (inversaL t) [h]



-- Retorna el último elemento de una lista
ultimoL :: [a] -> a
ultimoL [x] = x -- [x] equivale a x:[] (lista con un solo elemento)
ultimoL (_:t) = ultimoL t



-- Indica si un elemento está contenido en una lista
-- los elementos de tipo a deben admitir la operación == (deben ser de la clase Eq)
perteneceL :: (Eq a) => a -> [a] -> Bool -- predefinida como elem
perteneceL _ [] = False
perteneceL x (h:t) = (x==h) || perteneceL x t



-- Extrae todas las ocurrencias de un elemento en una lista
quitaL :: (Eq a) => a -> [a] -> [a]
quitaL x [] = []
quitaL x (h:t) = if (x==h) then quitaL x t else h : quitaL x t



-- izquierdaL(s,n): Retorna la sublista con los n primeros elementos de s
izquierdaL :: Int -> [a] -> [a] -- predefinida como take
izquierdaL 0 s = []
izquierdaL _ [] = []
izquierdaL n (h:t) = h : izquierdaL (n-1) t



-- CortaL(s n): Quita los n primeros elementos de la lista s
cortaL :: Int -> [a] -> [a]
cortaL 0 s = s
cortaL _ [] = []
cortaL n (h:t) = cortaL (n-1) t



-- sustituyeL(s x y): sustituye toda ocurrencia de x en s por y
sustituyeL :: (Eq a) => a -> a -> [a] -> [a]
sustituyeL _ _ [] = []
sustituyeL x y (h:t) = if h==x
				      then y : sustituyeL x y t
					  else h : sustituyeL x y t		  

					  
					  
-- Devuelve la suma de una lista de enteros.					  
sumaL :: [Int] -> Int
sumaL [] = 0
sumaL (h:t) = h + sumaL t



-- Devuelve el mayor elemento de una lista de enteros.
mayorIntL :: [Int] -> Int
mayorIntL [x] = x
mayorIntL (x:y:s) = if x>y then mayorIntL (x:s) else mayorIntL (y:s)



-- Devuelve el mayor elemento de una lista.
mayorL :: (Ord a) => [a] -> a
mayorL [x] = x
mayorL (x:y:s) = if x>y then mayorL (x:s) else mayorL (y:s)
-}


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): VOLVER A HACERLOS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

longuitudL :: [a] -> Int
longuitudL [] = 0
longuitudL (h:t) = 1 + longuitudL  t 
			
--------------------------------------------------------------------------
quitaUno :: (Eq a)=>[a] -> a-> [a]     --seria [1,2,3] 2 quedando [1,3]  
quitaUno  [] _ = []
quitaUno (h:t) x = if (x==h) then t
					else h: ( quitaUno t x)

					
quitaUltimoL :: [a]->[a]
quitaUltimoL [] = []
quitaUltimoL [h] =[]
quitaUltimoL (h:t) =h : quitaUltimoL t


menorIntL :: [Int] -> Int
menorIntL [] = error "Lista Vacio"
menorIntL [x] = x
menorIntL (h1:h2:t) = if (h1<h2) then menorIntL (h1:t) 
						else menorIntL (h2:t)
						
menorL :: (Ord a)=> [a]->a
menorL [] = error "lista Vacia"
menorL [a] = a
menorL (h1:h2:t) = if (h1<h2) then menorL (h1:t) 
						else menorL (h2:t)
						
						
derechaL :: [a]->Int->[a]
derechaL (h:t) x = if (x<0) then error "numero negativo"
					else if (x>length(h:t)) then error "mayor que la lista"
					else if (x==0) then []
					else if (x==length(h:t)) then (h:t)
					else derechaL t x
					
cremalleraL ::[a]->[a]->[a]				
cremalleraL [] s = s
cremalleraL  (h1:t1) (h2:t2)=h1:h2:(cremalleraL t1 t2)   

ordenarL :: (Ord a)=>[a]->[a]
ordenarL [] = []
ordenarL l = (menorL l):(ordenarL (quitaUno l(menorL l)))  

sombreroL :: (Eq a)=> [a]->[a]->Bool 
sombreroL [] [] = True
sombreroL  _ [] = False
sombreroL [] _ = True
sombreroL (h1:t1) (h2:t2) = if(h1==h2)then sombreroL t1 t2 
								else False
								

								
								
								
calcetinL :: (Eq a)=> [a]->[a]->Bool	
calcetinL x y = sombreroL (inversa x) (inversa y)



repetidosL :: (Eq a)=>[a]->Bool
repetidosL []=False
repetidosL [h]=False
repetidosL (h:t)= if(perteneceC h t ) then True
										else  repetidosL t
										
										
										
					
					
-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- *************************************************** COLAS **************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

{-
Las colas no exiten en haskell
--data Cola a = Vacio | Encola (Cola a ) a --> Encola (Encola 7 vacio )2
--data Cola a = CV | :. (Cola a) a --> :. (:. 7 CV )2

infixl 5 :.
data Cola a = cv | (Cola a) :. a deriving Show --> (cv :. 7) :. 2
											  --> cv :. 7 :. 2


Español        Haskell
vacio			cv
el 1			cv :. 1	
el 1 y el 2 	cv :. 1 :. 2


Sintaxis
op :: Cola a -> ...
		cv ->  vacio
		(cv :. x) -> 1 solo elemento
		(c :. x) -> cola c + elemento x al final
		
		
		
Ejemplo:
cabeza c :: cola a -> a
cabeza c cv = error "cola vacia"
cabeza c (cv :. x) = x
cabeza c (c :. x) = cabeza c

notas:

al reves que la teoria , nos recorremos la cola desde el ultimo elemento al primero a la hora de LEER / SACAR / OBTENER 
cv :. 1 :. 2 :. 3 
	  3<---2<---1
		




		
restoC :: cola a --> cola a
restoC cv = error "cola vacia"
restoC (cv :. x) = cv
restoC (c :. x) (restoC c) :. x

										  




										  
										  
										  
										  
										  
-}





infixl 5 :.
data Cola a = CV | (Cola a) :. a deriving Eq

-- Términos Sintácticos
t1cola = CV :. 1 :. 2 :. 3 :. 4
t2cola = CV :. 4 :. 3 :. 5 :. 8

-- Sobreescritura de Show:          
instance (Show a) => Show (Cola a) where 
   show s     = "{"++ showelem s ++ "}"
    
showelem :: (Show a)=> Cola a -> String
showelem CV = ""
showelem (CV :. e) = show e
showelem (s :. e) =  showelem s ++ ", " ++ show e


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): SOLUCIONES
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
{-
-- Devuelve si una cola esta vacia
cvacia :: Cola a -> Bool   
cvacia CV = True
cvacia _  = False
	
	
		
--	Devuelve la cabeza de una cola
cabezaC :: Cola a -> a
cabezaC  CV = error "Cola vacia"
cabezaC (CV :. x) = x
cabezaC (c :. x) = cabezaC c
	
	

-- Devuelve el resto de una cola	
restoC :: Cola a -> Cola a
restoC CV = error "Cola vacia"
restoC (CV :. x) = CV 
restoC (c :. x) = (restoC c) :. x



-- Devuelve la longitud de una cola
longitudC :: Cola a -> Int
longitudC CV = 0
longitudC c = 1 + longitudC (restoC c)



-- Devuelve la concatenacion de dos colas
concatenaC :: Cola a -> Cola a -> Cola a
concatenaC c CV = c
concatenaC CV c = c
concatenaC c1 c2 = concatenaC (c1 :. (cabezaC c2)) (restoC c2)



-- Devuelva la cola inversa de una cola
inversaC :: Cola a -> Cola a
inversaC CV = CV
inversaC c = inversaC (restoC c) :. (cabezaC c)



-- Devuelve el ultimo elemento de una cola
ultimoC :: Cola a -> a
ultimoC CV = error "Cola Vacia"
ultimoC (CV :. e) = e
ultimoC c = ultimoC (restoC c) 



--perteneceC(x): Indica si el elemento ‘x’ está contenido en una cola.
perteneceC :: (Eq a) => Cola a -> a -> Bool
perteneceC CV _ = False
perteneceC c  x = if (cabezaC c == x) then True else perteneceC (restoC c) x



--quitaC(x): Elimina todas las ocurrencias del elemento ‘x’ de una cola.
quitaC :: (Eq a) => Cola a -> a -> Cola a
quitaC  CV _ = CV
quitaC  (c :. h) x = if (h == x) then quitaC c x
	                 else 			  (quitaC c x) :. h

			  
			  
--izquierdaC(n): Devuelve una subcola con los ‘n’ primeros elementos de una cola.



--cortaC(n): Quita los ‘n’ primeros elementos de una cola.



--sustituyeC(x,y): Sustituye toda ocurrencia de ‘x’ por ‘y’ en una cola.
sustituyeC :: (Eq a) => Cola a -> a -> a -> Cola a
sustituyeC CV _ _ = CV
sustituyeC (c :. h) x y = if (h==x) then (sustituyeC c x y) :. y  
						  else 			 (sustituyeC c x y) :. h


						  
--sumaC: Devuelve la suma de una cola de enteros.
sumaC :: Cola Int -> Int
sumaC CV = 0
sumaC (c :. h) = h + sumaC c



--mayorIntC: Devuelve el mayor elemento de una cola de enteros.
mayorIntC :: Cola Int -> Int
mayorIntC CV = error "Cola vacia"
mayorIntC (CV :. h) = h
mayorIntC (c :. h2 :. h1) = if (h1 > h2) then mayorIntC (c :. h1)
						    else			  mayorIntC (c :. h2)
						 
						 

--mayorC: Devuelve el mayor elemento de una cola.
mayorC :: (Ord a) => Cola a -> a
mayorC CV = error "Cola vacia"
mayorC (CV :. h) = h
mayorC (c :. h2 :. h1) = if (h1 > h2) then mayorC (c :. h1)
						 else			   mayorC (c :. h2)
-}


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): VOLVER A HACERLOS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------









-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- *************************************************** PILAS **************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************





{-

Pilas:
no existen en haskell

infixl 5 :/
data Pila a = pv | a :/ (Pila a) deriving Show --> 7:/ ( 2:/ pv)
											  --> 7 :/ 2 :/ pv


Español        Haskell
vacio			pv
el 1			1 :/ pv
el 1 y el 2 	1:/2:/pv



Sintaxis
op :: Pila a -> ...
		pv ->  vacio
		(x :/ pv) -> 1 solo elemento
		(x :/ p) -> pila p + elemento x al Principio










-}
infixr 5 :/  	
	
data Pila a  =  PV   |  a  :/  (Pila a) deriving (Show, Eq)
    
-- Términos Sintácticos
t1pila = 4 :/ 3 :/ 2 :/ 1 :/ PV
t2pila = 8 :/ 5 :/ 3 :/ 4 :/ PV
	
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): SOLUCIONES
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
{-
-- Devuelve si una pila esta vacia
pvacia   :: Pila a -> Bool	
pvacia PV = True
pvacia _  = False



-- Devuelve el tope de una pila
tope     :: Pila a -> a
tope (x :/ _) = x



-- Desapila el tope de una pila
desapila :: Pila a -> Pila a
desapila (_ :/ p) = p



-- longitudP: Retorna la longitud de una pila.
longitudP :: Pila a -> Int
longitudP PV = 0
longitudP (h:/t) = 1 + longitudP t



-- concatenaP: Concatena dos pilas.
concatenaP :: Pila a -> Pila a -> Pila a
concatenaP PV p = p
concatenaP (h:/t) p = h :/ concatenaP t p



-- inversaP: Retorna la pila de partida con sus elementos dispuestos en orden inverso.
inversaP :: Pila a -> Pila a
inversaP PV = PV
inversaP (h:/t) = concatenaP (inversaP t) (h:/PV)



-- ultimoP: Retorna el último elemento de una pila.
ultimoP :: Pila a -> a
ultimoP (h :/ PV) = h
ultimoP (_:/t) = ultimoP t



-- perteneceP(x): Indica si el elemento ‘x’ está contenido en una pila.
perteneceP :: (Eq a) => a -> Pila a -> Bool
perteneceP _ PV = False
perteneceP x (h:/t) = (x==h) || perteneceP x t



-- quitaP(x): Elimina todas las ocurrencias del elemento ‘x’ de una pila.
quitaP :: (Eq a) => a -> Pila a -> Pila a
quitaP x PV = PV
quitaP x (h:/t) = if (x==h) then quitaP x t else h :/ quitaP x t


-- izquierdaP(n): Devuelve una subpila con los ‘n’ primeros elementos de una pila.
izquierdaP :: Int -> Pila a -> Pila a
izquierdaP 0 p = PV
izquierdaP _ PV = PV
izquierdaP n (h:/t) = h :/ izquierdaP (n-1) t



-- cortaP(n): Quita los ‘n’ primeros elementos de una pila.
cortaP :: Int -> Pila a -> Pila a
cortaP 0 p = p
cortaP _ PV = PV
cortaP n (h:/t) = cortaP (n-1) t



--sustituyeP(x,y): Sustituye toda ocurrencia de ‘x’ por ‘y’ en una pila.
sustituyeP :: (Eq a) => a -> a -> Pila a -> Pila a
sustituyeP _ _  PV = PV
sustituyeP x y (h:/t) = if h==x
			   then y :/ sustituyeP x y t 
			   else h :/ sustituyeP x y t	  

					  
					  
-- sumaP: Devuelve la suma de una pila de enteros.					  
sumaP :: Pila Int -> Int
sumaP PV = 0
sumaP (h:/t) = h + sumaP t



-- mayorIntP: Devuelve el mayor elemento de una pila de enteros.
mayorIntP :: Pila Int -> Int
mayorIntP (h :/ PV) = h
mayorIntP (h1:/h2:/t) = if h1>h2 then mayorIntP (h1:/t) else mayorIntP (h2:/t)



-- mayorP: Devuelve el mayor elemento de una pila.
mayorP :: (Ord a) => Pila a -> a
mayorP (h:/PV) = h
mayorP (h1:/h2:/t) = if h1>h2 then mayorP (h1:/t) else mayorP (h2:/t)
-}



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS): VOLVER A HACERLOS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

			
			
			
-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- ************************************* EJERCICIOS DE CONTROLES CON TADS LINEALES ****************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************
--control 1 A 2014 2015
{-
data Tmin = M Int Int deriving (show ,Eq , ord)

--a) son libres? no lo  son ya que M pude ser 69 minutos y los segundos pueden ser 68 segundos dando algo erroneo (distintas entradas representan la misma salida)

--Forma normal
fnTmin:: Tmin->Tmin
fnTmin x=error "deberiamos hacer minutos x 60 + segundos y obtner la hora correcta"
--Forma normalzada
suma:: Tmin->Tmin->Tmin
suma (M x y) (M x y) = fnTmin(T(x+a)(y+b))   


--

-}

--control grupo A 2014 / 

comparable ::(Ord a)=> [a]->a->[a]
comparable [] _ = []
comparable (h:t) x = if (h>x) then h:comparable t x   
						else    comparable t x



--control  grupo B 2014
comparable2:: (Ord a)=>[a]->a->Int
comparable [] _ = 0
comparable (h:t) x = if (h>x) then 1+comparable t x   
						else   0+comparable t x



--Control 



