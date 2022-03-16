module TwoFour (
    TwoFourTree(..),
    sampleTree
) where
    data TwoFourTree t = 
        Empty
        | Two t (TwoFourTree t) (TwoFourTree t)
        | Three t t (TwoFourTree t) (TwoFourTree t) (TwoFourTree t)
        | Four t t t (TwoFourTree t) (TwoFourTree t) (TwoFourTree t) (TwoFourTree t) 
        deriving(Show)
    sampleTree :: TwoFourTree Int
    sampleTree = Two 8 Empty (Three 44 39 Empty Empty Empty)
