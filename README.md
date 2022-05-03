# Bateria-Eletronica-com-Arduino
Código micromegadrum para arduíno.
OBS: FICAR ATENTO NAS CONFIGURAÇÕES DA ABA j_pin E DEFINIR A QUANTIDADE DE PADS QUE FOR USAR PARA EVITAR QUE OUTROS SONS SEJAM REPRODUZIDOS ALEATÓRIAMENTE.

Para conseguir reproduizr os sons enviados pelos sensores você necessitará dos seguintes programas:
loop MIDI - para converter os sinais dos sensores(piezos) que passam pelo arduíno em comunicação serial para MIDI.
Hairless - Para pegar os sinais midi e reproduzir no seu VSTI (Virtual Studio Technology Instrument - Instrumento Virtual) - Mais populares EzDrummer ou Addctive Drums. 

PARA FAZER GRAVAÇOES SERÁ NECESSÁIO UMA DAW (DIGITAL AUDIO WORKSTATION)
MAIS POPULARES:
PRO TOOLS,
SONAR,
CUBASE,
ABLETON LIVE,
FL STUDIO,
REAPER

Att. Aurélio Rocha Barreto

//==============================================================================
//=>                microDRUM/nanoDRUM firmware v1.4.0                        <= 
//=>                        www.microdrum.net                                 <=
//=>                         CC BY-NC-SA 3.0                                  <=
//=>                                                                          <=
//=> Massimo Bernava                                                          <=
//=> massimo.bernava@gmail.com                                                <=
//=> 2015-12-30                                                               <=
//=>           ADAPTADO PARA O ARDUINO MEGA SEM USO DOS MULTIPLEX             <=
//=>                               POR                                        <=
//=>                       PEDRO HENRIQUE KNUP                                <=
//=>                      facebook.com/pedroknup                              <=
//=>                                                                          <=
//=>                    ADAPTAÇÕES EM CÓDIGO POR                              <=
//=>                      AURÉLIO ROCHA BARRETO                               <=
//=>                  facebook.com/aurelio.barreto.96                         <=
//=>                  aurelionadjabarreto@gmail.com                           <=
//=>                           2020-08-21                                     <=
//=>                                                                          <=
//=>                 INSERÇÃO DA FUNÇÃO NOTE OFF POR                          <=
//=>                         ROBERTO GOMES                                    <=
//=>                           2020-08-21                                     <=
//=>                                                                          <=
//=>                                                                          <=
//=>                                                                          <=
//=>                                                                          <=
//==============================================================================

