# Passa a bola dragao 

Nosso projeto parte de uma proposta de transformar cigarros eletrônicos descartados em espirometros funcionais, acessíveis e sustentáveis.

Os cigarros eletrônicos tradicionais geralmente são compostos pelo seguintes componentes:
Bateria LiFePO (Célula S)
Sensor de pressão com controlador
Elemento resistivo
Reservatório
Corpo
Tampas / piteira

Alguns elementos altamente recicláveis, ex.: bateria, com um balanceador de recarga, regulador na saída da célula 2S abaixando 7.3 -> 5 V temos power bank. Acoplando múltiplos elementos resistivos a um reservatório metálico podemos fazer copo / chaleira com aquecimento elétrico. Elementos plásticos podem ser triturados e transformados em material para moldagem de injeção ou filamento para impressora 3D. Alumínio é o material mais reciclável, podendo ser refundido.


Para fazermos um sistema de medidas de pressão mais robusto, podemos usar múltiplos sensores digitais suficientemente parecidos, e criar caminhos pneumáticos que abaixem a pressão vista em cada um. Para sensor pulmonar, basta que uma pessoa saudável consiga acender uma quantidade razoável, e uma pessoa com baixa capacidade pulmonar acenda poucos, pode vazar ar.

# Funcionamento do sensor

Os sensores de pressão inclusos nas canetas vaporizadoras são os de membrana: uma membrana de material elástico fino é inserida em uma cavidade de área A de modo que fica tensionada com uma certa força F0, quando uma pressão P tal que P/A > F0, a membrana vira ao outro lado, fechando o circuito. Logo, é um sensor digital.

# Lista de Materiais
Fita kapton
-Fita de cobre
-Brocas
-Tubos de caneta
-Cola quente
-Superbonder
-Brocas 0.7, 1, 1.4, 2.5, 4
-Carregador de bateria
-Ferro de solda 
-Micro retifica

# Medidas de pressão da calibração 

| Numero sensor | Pressão medida (hPa) | 
| --------      | ---------------------|
| 1             | 945                  | 
| 2             | 953                  |          
| 3             | 955                  |
| 4             | 960                  |  
| 5             | 966                  |

# Bibliografia

Teardown sensor e ASIC:
https://robruark.com/other/Teardowns/Vape_ASIC/vape_asic.html

Importancia da espirometria: Kouri A, Dandurand RJ, Usmani OS, Chow CW. Exploring the 175-year history of spirometry and the vital lessons it can teach us today. Eur Respir Rev. 2021;30(162):210081. https://doi.org/10.1183/16000617.0081-2021

Estudo sobre a baixa quantidade de diagnosticos em São Paulo: Nascimento OA, Camelier A, Rosa FW, Menezes AM, Pérez-Padilla R, Jardim JR, et al. Chronic obstructive pulmonary disease is underdiagnosed and undertreated in São Paulo (Brazil): results of the PLATINO study. Braz J Med Biol Res. 2007;40(7):887-895. https://doi.org/10.1590/S0100-879X2006005000133

Baixa quantidade de diagnósticos na america latina: Neffen H, Fritscher C, Schacht FC, Levy G, Chiarella P, Soriano JB, et al. Asthma control in Latin America: The Asthma Insights and Reality in Latin America (AIRLA) survey. Rev Panam Salud Publica. 2005;17(3):1917. https://doi.org/10.1590/S1020-49892005000300007

As 5 medidas da espirometria moderna: Hutchinson J. On the capacity of the lungs, and on the respiratory functions, with a view of establishing a precise and easy method of detecting disease by the spirometer. Med Chir Trans. 1846;29:137-252. https://doi.org/10.1177/095952874602900113

Sobre valores espirométricos de referência: Graham BL, Steenbruggen I, Miller MR, Barjaktarevic IZ, Cooper BG, Hall GL, et al. Standardization of Spirometry 2019 Update. An Official American Thoracic Society and European Respiratory Society Technical Statement. Am J Respir Crit Care Med. 2019;200(8):e70-e88. https://doi.org/10.1164/rccm.201908-1590ST

Pereira CAC, Soares MR, Gimenez A. The importance of appropriate reference values in patients suspected of having obstructive lung disease. J Bras Pneumol. 2019;45(6):e20190299. https://doi.org/10.1590/1806-3713/e20190299


# Apêndice 1: Roteiro do video enviado

Nosso projeto parte de uma proposta de transformar cigarros eletrônicos descartados em espirometros funcionais, acessíveis e sustentáveis. Os vapes geralmente são compostos por um cartucho com atomizador, sensor de pressão, bateria e corpo de alumínio ou plástico. O crescente uso de vapes tem sido associado ao agravamento de doenças respiratórias como asma, bronquite e COVID longa.

Diante dessa realidade, a espirometria se torna essencial para o diagnóstico precoce, acompanhamento clínico e pesquisas em saúde respiratória. No entanto, o alto custo e a baixa disponibilidade de espirometros dificultam seu uso em larga escala.
Nossa proposta busca reverter esse cenário com uma solução de baixo custo: reutilizar os próprios componentes dos vapes — especialmente os sensores de pressão, que são mais difíceis de serem reaproveitados — para construir espirometros simples, modulares e funcionais. A reutilização dos vapes tem duplo impacto: ambiental, ao reduzir o descarte de lixo eletrônico; e social, ao facilitar o acesso a exames respiratórios em comunidades e unidades de saúde com poucos recursos.
O funcionamento do dispositivo é simples. Utilizamos o corpo do vape como tubo principal, com seu bocal em uma das extremidades. Ao longo do tubo são feitos pequenos furos com diâmetros variados, de forma a modificar a pressão que ativa cada sensor. Cada furo leva a um sensor de pressão que estão espaçados de forma estratégica, conectado a LEDs.

Os sensores foram caracterizados individualmente e se comportam de acordo com estudos disponíveis.   À medida que o usuário sopra no aparelho, o fluxo de ar ativa os sensores gradualmente: quanto maior a pressão do sopro, mais LEDs se acendem. Isso permite uma leitura visual e intuitiva da força expiratória do usuário.
A energia do sistema é fornecida pela própria bateria do vape, que também foi reaproveitada, com um conector USB para recarregamento. A calibração é feita associando os níveis de pressão aos LEDs ativados. Um protótipo simplificado foi feito com os materiais fornecidos para demonstrar o princípio de funcionamento com apenas 3 níveis de led: pressão baixa, média e alta. 
Um protótipo completo com seis sensores foi conectado a um sistema de ar comprimido e manômetro a fim de garantir medidas confiáveis da pressão em diferentes pontos do tubo. Opcionalmente com o uso de um microcontrolador o sistema também mede a força, o volume e o tempo de expiração do usuario, que pode ser utilizado para historico, programa de tratamento e fortalecimento muscular pulmonar.

O projeto se destaca por sua sustentabilidade, devido o uso quase completo dos componentes do vape; sua viabilidade tecnica ao demonstrar protótipos calibrados e funcionais; sua viabilidade economica pelo baixo custo em comparação aos espirometros comerciais e  escalabilidade por  utilizar um grande número de componentes dificeis de reciclar, além da facilidade de fabricação. 
Aplicação social por ter um foco na prevenção, detecção e tratamento de diversas doenças respiratórias e na criatividade e inovação , pois a modificação dos vapes permite que o dispositivo seja utiliziado como ferramenta de reabilitação e fortalecimento pulmonar, dada sua leveza, portabilidade e potencial para gameficação do exercicio respiratorio.
No QR code é possível ver informações adicionais como a bibliografia, e a documentação do projeto.



