% Basic Family Relations Program

% Facts
male(john).
male(mike).
male(tom).
male(bob).
male(james).

female(mary).
female(lisa).
female(susan).
female(emma).
female(anna).

parent(john, mike).
parent(john, lisa).
parent(mary, mike).
parent(mary, lisa).
parent(mike, tom).
parent(mike, susan).
parent(lisa, bob).
parent(lisa, emma).
parent(tom, james).
parent(susan, anna).

% Rules
father(X, Y) :- male(X), parent(X, Y).
mother(X, Y) :- female(X), parent(X, Y).

son(X, Y) :- male(X), parent(Y, X).
daughter(X, Y) :- female(X), parent(Y, X).

grandparent(X, Y) :- parent(X, Z), parent(Z, Y).
grandfather(X, Y) :- male(X), grandparent(X, Y).
grandmother(X, Y) :- female(X), grandparent(X, Y).

sibling(X, Y) :- parent(Z, X), parent(Z, Y), X \= Y.
brother(X, Y) :- male(X), sibling(X, Y).
sister(X, Y) :- female(X), sibling(X, Y).

uncle(X, Y) :- brother(X, Z), parent(Z, Y).
aunt(X, Y) :- sister(X, Z), parent(Z, Y).

ancestor(X, Y) :- parent(X, Y).
ancestor(X, Y) :- parent(X, Z), ancestor(Z, Y).

% Example queries:
% ?- father(john, mike).
% ?- mother(mary, Who).
% ?- sibling(mike, lisa).
% ?- grandfather(john, tom).
% ?- ancestor(john, james).
