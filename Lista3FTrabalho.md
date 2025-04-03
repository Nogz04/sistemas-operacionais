<h1>EXERCÍCIOS RESOLVIDOS</h1>

<h2>1) Dadas as Linguagens Regulares sobre o alfabeto {a,b}, construa as Expressões Regulares
correspondentes:</h2>

a) L1 = {w| w possui aaa como subpalavra}

> (a + b)* aaa (a+b)*

b) L2 = {w| o sufixo de w é bb}

> (a + b)* bb

c) L3 = {w| bb é subpalavra de w e aaaa é sufixo}

> (a+b)* bb (a+b)* aaaa

d) L4 = {w| w possui sufixo aaa ou prefixo bb ou w = Ɛ}

> Ɛ + (a+b)* aaa + bb(a+b)*

e) L5 = {w| w possui sufixo ba e prefixo ab}

> ab (a+b)* ba

<h2>2) Construa os Autômatos Finitos que reconheçam as linguagens geradas pelas Expressões Regulares:</h2>

Software utilizado: JFLAP

i. (b+ab)*

> ![{664303F3-9C8E-44CD-B99E-E64CBED6B3C2}](https://github.com/user-attachments/assets/8cb4044d-93a3-4667-a1b5-7c6792d02776)


ii. (a + Ɛ)(b+ba)

> ![{A5E95BCB-01CA-4568-9BB0-2BDBB1901D38}](https://github.com/user-attachments/assets/7c399707-ee2d-4212-97f8-ee16415f9b10)


iii. (ab+ba)*(aa+bb)

> ![{E406860C-BD27-4C03-A7E0-AEF96BC516FB}](https://github.com/user-attachments/assets/8d0cb68b-c0d3-48aa-bc7e-df8724cba824)


iv. ab(abb*+baa*)*ba

> ![image](https://github.com/user-attachments/assets/cf1f72a3-8838-433e-8067-c731d0a73fa3)

v. (aa+b)*(a+bb)

> ![image](https://github.com/user-attachments/assets/3ef35b83-1229-43b3-98e1-3cea858b9f20)

vi. a*(aa+bb)

> ![image](https://github.com/user-attachments/assets/e4d7e395-0437-459b-983b-bba41bea40fa)

vii. b*ab*ab*

> ![image](https://github.com/user-attachments/assets/b5e169be-f1a4-427c-bcc7-d85ffda55433)

viii. (b+ab)*(Ɛ+a)

> ![image](https://github.com/user-attachments/assets/c76c1e8b-2831-4e55-92c9-491b7ed6801e)

ix. (aa+bb)*(ab)*

> ![image](https://github.com/user-attachments/assets/b4fc86df-9670-4bda-985e-f84c64ef4f9f)


x. (ab+ba)*(aa+bb)*

> ![image](https://github.com/user-attachments/assets/d22ffee3-dd90-4e55-ae18-4748cfa7530f)


xi. (0+1)* (00+01+10+11) (0+1)*

> ![image](https://github.com/user-attachments/assets/37bc2cd3-4a94-4f74-8dcb-505263c88791)

<h2>3) Dadas as Expressões Regulares sobre ∑={a, b}, identifique quais linguagens são denotadas:</h2>

i. (aa+b)*(a+aa)
ii. (b+ab)*( +a)
iii. (ab+ba) (b+a)*
iv. (0+1)* 111 (0+1)*
v. (0+1)* (10+01)
