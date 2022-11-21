module Ejercicios where

-- **************************************************** Tema 2 - Descripcion formal en Haskell ******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************
-- **************************************************** Tema 2 - Descripcion formal en Haskell *******************************************************************************************************************

-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 1. TAD Boolean ***
-- ******************************************************************
-- ******************************************************************

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

data Bool3 = T' | F' | M deriving (Eq, Show)

-- Términos Sintácticos:
{-
t1Bool3 = not3(not3(not3(not3(not3 T')))))
si ponemos t1Bool3 en el terminal, saldria el resultado de la ecuacion, actua como una variable
-}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
not3 :: Bool3 -> Bool3
not3 T' = F'
not3 F' = T'
not3 M = M

and3 :: Bool3 -> Bool3 -> Bool3
and3 T' x = x
and3 F' _ = F'
and3 M x = if (x==F') then F' else M

or3 :: Bool3 -> Bool3 -> Bool3
or3 T' x = T'
or3 F' x = x
or3 M x = if (x==T') then T' else M

{-operador xor
considerando 0 falso y 1 verdadero
1  1 ->  0
1  0 ->  1
0  1 ->  1
0  0 ->  0
por tanto, el operador maybe deberia de dar falso siempre ya que
solo da positivo cuando son iguales-}
xor3 :: Bool3 -> Bool3 -> Bool3
xor3 T' x = if (x==T') then F' else T'
xor3 F' x = if (x==F') then T' else F'
xor3 M x = F'




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

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS):
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
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
mayorNAT :: NAT -> NAT -> Bool
mayorNAT Cero Cero = False
mayorNAT Cero x = False
mayorNAT x Cero = True
mayorNAT (Suc x) (Suc y) = mayorNAT x y

restaNAT :: NAT -> NAT -> NAT
restaNAT Cero Cero = Cero
restaNAT Cero x = error "No existe negativos"
restaNAT x Cero = x
restaNAT (Suc x) (Suc y) = restaNAT x y

restaPositivaNAT :: NAT -> NAT -> NAT
restaPositivaNAT Cero x = Cero
restaPositivaNAT x Cero = x
restaPositivaNAT (Suc x) (Suc y) = restaPositivaNAT x y

multiNAT :: NAT -> NAT -> NAT
multiNAT Cero x = Cero
multiNAT x Cero = Cero
multiNAT x (Suc y) = sumaNAT x (multiNAT x y)


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





-- ***************************************************************************
-- ***************************************************************************
-- ************************************* Ejercicio 4. ENTREGABLE DE ESTE AÑO *
-- ***************************************************************************
-- ***************************************************************************



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 5. TAD Bool10 ****
-- ******************************************************************
-- ******************************************************************
data Bool10 = TRUE Int deriving (Show, Eq, Ord)

fnBool10 :: Bool10 -> Bool10
fnBool10 (TRUE x) = if(x > 9) then (TRUE 9) else if (x < 0) then (TRUE 0) else (TRUE x)

not10 :: Bool10 -> Bool10
not10 (TRUE x) = not10Aux (fnBool10 (TRUE x))

not10Aux :: Bool10 -> Bool10
not10Aux (TRUE x) = TRUE (9-x)

and10 :: Bool10 -> Bool10 -> Bool10
and10 (TRUE x) (TRUE y) = if(x<y) then fnBool10(TRUE x) else fnBool10(TRUE y)





-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 6. TAD BoolNat ***
-- ******************************************************************
-- ******************************************************************
{-no son generadoras libres, muchas entradas representan la misma salida-}
-- Falso -> Par
-- Verdadero -> Impar
data BoolNat = Cero' | Suc' BoolNat deriving (Show, Eq, Ord)

fnBoolNat :: BoolNat -> BoolNat
fnBoolNat Cero' = Cero'
fnBoolNat (Suc' Cero') = (Suc' Cero')
fnBoolNat (Suc' (Suc' x)) = fnBoolNat x


-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 7. TAD Bool5 *****
-- ******************************************************************
-- ******************************************************************



-- ******************************************************************
-- ******************************************************************
-- ************************************* Ejercicio 8. TAD BoolNat35 *
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
{- Las listas en haskell ya existen. 
Español:		Haskell:
vacia			[]
el 1			1:[]   == [1]
el 1 y el 2		1:2:[] ==  [1,2]
la 'a' y la 'b'		'a':'b':[] == ['a','b'] == "ab"

* Sintaxis
op :: [a] -> ...
       x  -> Cualquier lista
      [] -> Vacia
      [x] -> Lista de 1 solo elemento
      [x,y] -> Lista de solo dos elementos
      (h:t) -> Lista 't' con elemento 'h' de cabeza
      (h1:h2:t) -> Lista 't' con elementos 'h1' y 'h2
      de cabeza

* Unir
elemento y elemento
[x,y]

elemento y lista
(h:t)

lista y lista
t1 ++ t2

lista y elemento
t1 ++ [h]

* Operaciones predefinidas
head [2,1,3] -> 2 (devuelve el elemento de la cabeza)

tail [2,1,3] -> [1,3] (devuelve una lista)

reverse [2,1,3] -> [3,1,2]

elem 1 [2,1,3] -> True

[2,1,3] !! 2 -> 3 (Indice 2 del array)



 
 -}
-- TAD Lista a. Operaciones Generadoras Libres
-- data Lista a = Nil | Cons a (Lista a)

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
longitudL :: [a] -> Int -- predefinida como length
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

cabezaL :: [a] -> a
cabezaL [] = error "Vacia"
cabezaL (h:t) = h

longitudL :: [a] -> Int
longitudL [] = 0
longitudL (h:t) = 1 + longitudL (t)

inversaL :: [a] -> [a]
inversaL [] = []
inversaL (h:t) = (inversaL t) ++ [h]

perteneceL :: (Eq a) => a -> [a] -> Bool
perteneceL _ [] = False
perteneceL x (h:t) = if (x==h) then True else perteneceL x t

sustituyeL :: (Eq a) => a -> a -> [a] -> [a]
sustituyeL _ _ [] = []
sustituyeL x y (h:t) = if (x == h) then (y:sustituyeL x y t) else (h:(sustituyeL x y t))

mayorIntL :: [Int] -> Int
mayorIntL [] = error "lista vacia"
mayorIntL [x] = x
mayorIntL (h1:h2:t) = if (h1>h2) then mayorIntL (h1:t) else mayorIntL (h2:t)

mayorL :: (Ord a) => [a] -> a
mayorL [] = error "lista vacia"
mayorL [x] = x
mayorL (h1:h2:t) = if (h1>h2) then mayorL (h1:t) else mayorL (h2:t)

quitaUnoL :: (Ord a) => a -> [a] -> [a]
quitaUnoL _ [] = []
quitaUnoL x (h:t) = if (x==h) then t else h:(quitaUnoL x t)

quitaUltimoL :: (Eq a) => [a] -> [a]
quitaUltimoL [] = error "error"
quitaUltimoL [x] = []
quitaUltimoL (h:t) = h:(quitaUltimoL t)

derechaL :: Int -> [a] -> [a]
derechaL x (h:t) = if (x<0 || x> longitudL(h:t)) then error "error" else if (x==0) then [] else if (x==longitudL(h:t)) then (h:t) else derechaL x t


cremalleraL :: [a] -> [a] -> [a]
cremalleraL [] [] = []
cremalleraL x [] = x
cremalleraL [] x = x
cremalleraL (h1:t1) (h2:t2) = h1:h2:(cremalleraL t1 t2)

sumaL :: [a] -> [a] -> [a]
sumaL x [] = x
sumaL [] x = x
sumaL (h1:t1) (h2:t2) = h1 + h2 (sumaL(t1 t2))

{-cremallera: t1=1,2,3  t2=5,8,1  cremallera=1,5,2,8,3-1 -}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
















-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- *************************************************** COLAS **************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

{-

- Colas: No existen en Haskell

data Cola a = Vacia | Encola (Cola a) a -> Encola (Encola vacia 7) 2

data Cola a = cv | :. (Cola a) a -> : (:. cv 7) 2

infixl 5:.
data Cola a = cv | (Cola a) :. a deriving ... ->
... -> (cv :. 7) :. 2 => cv:.7:.2

Español:			Haskell:
Vacia				cv
el 1				cv:.1
el 1 y el 2			cv:.1:.2

Sintaxis
op :: Cola a -> ...
	x    -> cualquiera
     (cv:.x) -> solo 1 elemento
     (cv:.x) -> Cola 'c' con elemento 'x' encolado
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
cabezaC :: Cola a -> a
cabezaC     CV = error "vacia"
cabezaC (CV:.x) = x
cabezaC (c:.x) = cabezaC c

restoC :: Cola a -> Cola a
restoC CV = error "vacia"
restoC (CV:.x) = CV
restoC (c:.x) = (restoC c):.x

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------









-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- *************************************************** PILAS **************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************
{-
- Pilas no existen en haskell. IGUAL QUE LISTAS
infixr 5 :/  	
	
data Pila a  =  PV   |  a  :/  (Pila a) deriving (Show, Eq)

Español		Haskell
Vacia		PV
el 1		1:/PV
el 1 y el 2	1:/2:/PV

sintaxis

op :: Pila a -> .....
	x -> cualquiera
	x:/PV -> solo 1 elemento
	x:/p -> Pila 'p' con elemento 'x' apilado


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
topeP :: Pila a -> a
topeP PV = error "pila vacia"
topeP (x:/p) = x

desapilaP :: Pila a -> Pila a
desapilaP PV = error "pila vacia"
desapilaP (x:/p) = p
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

			
			
			
-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- ************************************* EJERCICIOS DE CONTROLES CON TADS LINEALES ****************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- ************************************* EJERCICIOS DE EXAMENENES EXTRAORDINARIOS *****************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************		

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------










			
			
			
			
			
			
			
			
			
			
			
			
			
			


-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************
-- *********************************************************************************************** ARBOLES *******************************************************************************************************************

-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- **************************************** ARBOL GENERAL *****************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

data ArbolG a  =  AGV  |  AG  a  [ ArbolG a ] deriving (Show, Eq)

-- Términos Sintácticos:
t1AG = AG 9	[
				(AG 2 []),
				(AG 3 []),
				(AG 4 [
						(AG 21 []),
						(AG 33 []),
						(AG 42 []),
						(AG 51 [])
					  ]
				),
				(AG 5 [])
			]
				
				
t2AG = AG 9  [
				(AG 2 []),
				(AG 4 [
						(AG 21 []),
						(AG 26 [])
					  ]
				)
			 ]


t3AG = AG 2 [
				(AG 1 []),
				(AG 5 [
						(AG 4 [
								(AG 3 []) 
							  ]
						),
						(AG 6 []),
						(AG 8 [])
					  ]
				),
				(AG 7 [
						(AG 9 [])
					  ]
				)
			]


						
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-- Devuelve si un arbol general esta vacio
vaciog :: ArbolG a -> Bool
vaciog AGV = True
vaciog _   = False



-- Nodo raiz de un arbol general
raizg :: ArbolG a -> a
raizg (AG r _) = r



-- Subarbol n del arbol general
subarbol :: Int -> ArbolG a -> ArbolG a
subarbol n (AG _ s) = if (n < 1) || (n > length s)  then AGV  else s !! (n-1)	-- length existe en Haskell para listas -- s[n-1] en java



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------














-- ************************************************************************************************************************
-- ************************************************************************************************************************
-- **************************************** ARBOL BINARIO *****************************************************************
-- ************************************************************************************************************************
-- ************************************************************************************************************************

data Arbol a = AV | AB a (Arbol a) (Arbol a) | Error deriving (Show, Eq)	-- El valor 'Error' se usara en la especificacion de Árboles de Búsqueda

-- Términos Sintácticos:
t1AB = AB 9
		 (AB 3 
			(AB 2 AV AV) 
			(AB 4 AV AV)
		 ) 
		 (AB 7 AV AV)

		 
		 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		
-- Devuelve si un arbol binario esta vacio
vacio :: Arbol a -> Bool
vacio AV  = True
vacio _   = False



-- Nodo raiz del arbol binario
raiz :: Arbol a -> a
raiz (AB r _ _) = r



-- Subarbolizquierdo del arbol binario
subarbolizdo :: Arbol a -> Arbol a
subarbolizdo (AB _ i _) = i



-- Subarbolderecho del arbol binario
subarboldcho :: Arbol a -> Arbol a
subarboldcho (AB _ _ d) = d



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------















-- ****************************************************************************************************************************
-- ****************************************************************************************************************************
-- **************************************** ARBOL DE BUSQUEDA *****************************************************************
-- ****************************************************************************************************************************
-- ****************************************************************************************************************************

-- Términos Sintácticos:
t1BUS = AB 10
		(AB 5 AV AV)
		(AB 15 
			(AB 13 AV AV) 
			(AB 17 AV AV)
		)  
			 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			
-- Devuelve si un arbol es arbol de busqueda
busqueda :: (Ord a) => Arbol a -> Bool
busqueda AV = True
busqueda (AB r i d) =   busqueda i 
                     && busqueda d 
                     && ( (vacio i) || (r > maximo i))
                     && ( (vacio d) || (r < minimo d))		
							
							
							
-- Devuelve si un elemento es el menor de un arbol de busqueda
menora ::(Ord a) => Arbol a -> a -> Bool
menora AV _ = True 	
menora (AB y i d) x = (y<x) && (menora i y) && (menora d x) && (mayora d y)



-- Devuelve si un elemento es el mayor de un arbol de busqueda
mayora :: (Ord a) => Arbol a -> a -> Bool
mayora AV _ = True 	
mayora (AB y i d) x = (y>x) && (mayora d y) && (mayora i x) && (menora i y)



-- Devuelve el maximo elemento de un arbol de busqueda                                          
maximo :: (Ord a) => Arbol a -> a  
maximo (AB r _ AV) = r
maximo (AB _ _ d )  = maximo d



-- Devuelve el minimo elemento de un arbol de busqueda                                          
minimo :: (Ord a) => Arbol a -> a  
minimo (AB r AV _) = r
minimo (AB _ i _ ) = minimo i



-- Inserta un elemento en un arbol de busqueda
inserta :: (Ord a) => a -> Arbol a -> Arbol a
inserta x AV = AB x AV AV
inserta x (AB r i d) |  x < r    = AB r (inserta x i) d
                     |  x > r    = AB r i (inserta x d)
                     |  True     = error "el elemento ya esta en el arbol"

					 
					 
-- Extrae (elimina) un elemento de un arbol de busqueda					 
extrae :: (Ord a) => a -> Arbol a -> Arbol a
extrae x AV = AV
extrae x (AB r i d) | x < r    = AB r (extrae x i) d
                    | x > r    = AB r i (extrae x d)
                    | vacio i  = d
                    | vacio d = i
                    | True     = AB (minimo d) i (extrae (minimo d) d)



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------








-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- **************************************** ARBOL AVL *****************************************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------









-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- **************************************** EJERCICIOS AVANZADOS ******************************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************					
			
-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- **************************************** ENTREGABLE 3: HUFFMAN *****************************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************

-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- **************************************** EJERCICIOS DE HUFFMAN *****************************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************

-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- **************************************** EJERCICIOS DE CONTROLES ***************************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************

-- ********************************************************************************************************************
-- ********************************************************************************************************************
-- ************************************* EJERCICIOS DE EXAMENENES EXTRAORDINARIOS *************************************
-- ********************************************************************************************************************
-- ********************************************************************************************************************




--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




















-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************
-- *********************************************************************************************** GRAFOS *******************************************************************************************************************

data Grafo a = GVacio | Nodo a (Grafo a) | Arco a a (Grafo a) deriving Show

-- Términos Sintácticos:
t1G = Arco 1 3 (Arco 1 2 (Arco 2 3 (Nodo 4 (Nodo 3 (Nodo 2 (Nodo 1 GVacio))))))
t2G = Arco 5 6 (Arco 1 3 (Arco 1 2 (Arco 2 3 (Nodo 6 (Nodo 5 (Nodo 4 (Nodo 3 (Nodo 2 (Nodo 1 GVacio)))))))))
t3G = creag [1,2,2,3,3,1,3,4]

{- Explicacion teorica de los axiomas de equivalencia. Los grafos no son libres, por los siguientes motivos:

	1) Los nodos asociados a un arco deben existir, y pueden estar en cualquier orden:
	
		Arco n m g = if esta n g && esta m g
					 then Arco m n g
					 else error "No existe algun nodo"

	2) Un grafo no puede tener nodos o arcos repetidos:
	
		Nodo m (Nodo n g) = if (n == m)
							then Nodo n g
							else Nodo n (Nodo m g) -- pueden intercambiarse las posiciones

		Arco n' m' (Arco n m g) = if (n == n' && m == m') or (n == m' && m == n')
		                		  then Arco n m g
								  else Arco n m (Arco n' m' g) -- pueden intercambiarse las posiciones

	3) Un grafo debe tener primero los nodos y luego los arcos:
		
		Nodo n' (Arco n m g) = Arco n m (Nodo n' g) 
-}


-- Forma Normal y Operaciones Auxiliares Necesarias. Solo teorico, no es necesario utilizarla en los ejercicios:

fnGrafos :: (Eq a) => Grafo a -> Grafo a
fnGrafos g = if  aristasok (reordena g)			-- Comprueba que todos los nodos de las aristas existen del grafo despues de ordenarlo
			 then quitarrepes (reordena g)		-- Quita aristas y nodos repetidos del grafo despues de ordenarlo
			 else GVacio		
		
reordena :: Grafo a -> Grafo a
reordena g = aux g GVacio

aux :: Grafo a -> Grafo a -> Grafo a 	-- acumula nodos en el 2º parámetro
aux (Nodo n g)  h   = aux g (Nodo n h)
aux (Arco x y g) h  = Arco x y (aux g h) 
aux GVacio h        = h

aristasok :: (Eq a) => Grafo a -> Bool 
aristasok (Arco x y g) = (esta x g) && (esta y g) && (aristasok g)
aristasok _            = True

quitarrepes :: (Eq a) => Grafo a -> Grafo a
quitarrepes GVacio       = GVacio 
quitarrepes (Nodo x g)   = if esta x g then quitarrepes g else Nodo x (quitarrepes g)
quitarrepes (Arco x y g) = if adyacentes x y g then quitarrepes g else Arco x y (quitarrepes g)

esta :: (Eq a) => a -> Grafo a -> Bool
esta _ GVacio       = False
esta x (Nodo y g)   = x==y || esta x g
esta x (Arco _ _ g) = esta x g  		-- sólo mira en los nodos


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJEMPLOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-- Crea grafo a partir de una lista de arcos
creag :: (Eq a) => [a] -> Grafo a
creag s = fnGrafos (caux s)

caux :: (Eq a) => [a] -> Grafo a
caux [] = GVacio
caux (x:y:t) = Arco x y (Nodo x (Nodo y (caux t)))



-- Devuelve si dos nodos son adyacentes
adyacentes :: (Eq a) => a -> a -> Grafo a -> Bool
adyacentes x y (Arco u v g) = x==u && y==v || x==v && y==u || adyacentes x y g
adyacentes _ _ _            = False



-- Devuelve si un grafo esta vacio
gvacio :: Grafo a -> Bool 
gvacio GVacio = True
gvacio _      = False  



-- Borra un nodo del grafo	
borranodo :: (Eq a) => a -> Grafo a -> Grafo a
borranodo _ GVacio      = GVacio
borranodo n (Arco x y g)= if n==x || n==y then borranodo n g  else Arco x y (borranodo n g) 
borranodo n (Nodo x g)  = if n==x then g else Nodo x (borranodo n g)



-- Borra un arco del grafo
borraarco :: (Eq a) => a -> a -> Grafo a -> Grafo a
borraarco x y (Arco u v g) = if x==u && y==v || x==v && y==u then g else Arco u v (borraarco x y g)
borraarco _ _ g            = g



-- Devuelve una lista de los sucesores de un nodo
sucesores :: (Eq a) => a -> Grafo a -> [a]
sucesores x (Arco y z g) = if (x==y) then z : sucesores x g
                           else if (x==z) then y : sucesores x g
                           else sucesores x g
sucesores _ _ = []



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS BASICOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-- OPERACIONES (EJERCICIOS AVANZADOS):
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-- *****************************************************************************************************************
-- *****************************************************************************************************************
-- **************************************** ENTREGABLE 4: FLOYD ****************************************************
-- *****************************************************************************************************************
-- *****************************************************************************************************************

-- *****************************************************************************************************************
-- *****************************************************************************************************************
-- **************************************** EJERCICIOS DE FLOYD ****************************************************
-- *****************************************************************************************************************
-- *****************************************************************************************************************

-- *****************************************************************************************************************
-- *****************************************************************************************************************
-- **************************************** EJERCICIOS DE CAMINOS **************************************************
-- *****************************************************************************************************************
-- *****************************************************************************************************************

-- *****************************************************************************************************************
-- *****************************************************************************************************************
-- **************************************** EJERCICIOS DE CONTROLES ************************************************
-- *****************************************************************************************************************
-- *****************************************************************************************************************

-- *****************************************************************************************************************
-- *****************************************************************************************************************
-- ************************************* EJERCICIOS DE EXAMENENES EXTRAORDINARIOS **********************************
-- *****************************************************************************************************************
-- *****************************************************************************************************************
