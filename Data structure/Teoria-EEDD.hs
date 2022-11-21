module Teoria where

--TAD Inventado
data Inventado =	B	|	M deriving (Show, Eq, Ord)

-- operaciones
contrario :: Inventado -> Inventado
{-contrario 	B 	= 	M
contrario 	M 	= 	B-}
-- otra forma
contrario x = if (x==B) then M else B

todo :: Inventado -> Inventado -> Inventado
{-todo	   B		B      =     B
todo       B		M      =     M
todo       M            B      =     M
todo       M            M      =     M-}

-- otra forma de escribir los axiomas
{-todo	   B            x      =     x
todo       M		_      =     M-}

--otra forma mas
todo 	x	y = if (x==B) then y else M
   
algo :: Inventado -> Inventado -> Inventado
algo	   B            B      =     B
algo       B            M      =     B
algo       M            B      =     B
algo       M            M      =     M

algoMensaje :: Inventado -> Inventado -> String
algoMensaje 	   x		y     =   if (x==B) then "Bien"
					  else if (y==B) then "Bien"
					  else "Mal"

-- Excepciones

operacion :: Inventado -> Inventado
operacion 	x	= error "operación no realizada"


-- tad NAT : el suc NAT es una operacion parametrizada
data NAT = Cero  | Suc NAT deriving (Show, Eq, Ord)

iguales :: NAT -> NAT -> Bool
iguales Cero Cero = True
iguales Cero   x  = False
iguales  x   Cero = False
iguales (Suc x) (Suc y) = iguales x y

suma :: NAT -> NAT -> NAT
suma	Cero    x   =  x
suma    (Suc x)  y  =  Suc(suma x y)


{-data INT = Cero' | Suc' INT | Pre' INT deriving (Show, Eq, Ord)

El data NAT solo hay una forma de obtener la salida
en los int hay mas de una forma de obtener una salida
-}

--TAD conjunto : Conjunto de elementos del mismo tipo (el tipo se define al usarlo)
-- TAD polimorfico
--CNV es conjunto no vacio
--las generadoras son no libres

data Conjunto a = Vacio | CNV a (Conjunto a) deriving Show


fnConjunto :: (Eq a) => Conjunto a -> Conjunto a
fnConjunto Vacio = Vacio
fnConjunto (CNV e c) = if (pertenece e c) then (fnConjunto c) else (CNV e (fnConjunto c))

pertenece :: (Eq a) => a -> Conjunto a -> Bool
pertenece x Vacio = False
pertenece x (CNV e c) = if (x==e) then True else pertenece x c





