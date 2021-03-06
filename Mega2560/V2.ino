
/*
 *     Midi Fighter 16 by Staal3D & 4D
 *     ---------------------------------------
 */

#include <Control_Surface.h>

USBMIDI_Interface midi;
// Fours potentiometer to analog pinout

CCPotentiometer potentiometer1(A0, {MIDI_CC::Channel_Volume, CHANNEL_2});

CCPotentiometer potentiometer2(A1, {MIDI_CC::Channel_Volume, CHANNEL_3});

CCPotentiometer potentiometer3(A2, {MIDI_CC::Channel_Volume, CHANNEL_4});

CCPotentiometer potentiometer4(A3, {MIDI_CC::Channel_Volume, CHANNEL_5});


using namespace MIDI_Notes;


NoteButton button1 = {2, {note(C, 2), CHANNEL_1},

NoteButton button2 = {3, {note(Db, 2), CHANNEL_1},

NoteButton button3 = {4, {note(D, 2), CHANNEL_1},

NoteButton button4 = {5, {note(Eb, 2), CHANNEL_1},

NoteButton button5 = {6, {note(E, 2), CHANNEL_1},

NoteButton button6 = {7, {note(F, 2), CHANNEL_1},

NoteButton button7 = {8, {note(Gb, 2), CHANNEL_1},

NoteButton button8 = {9, {note(G, 2), CHANNEL_1},

NoteButton button9 = {10, {note(Ab, 2), CHANNEL_1},

NoteButton button10 = {14, {note(A, 2), CHANNEL_1},

NoteButton button11 = {15, {note(Bb, 2), CHANNEL_1},

NoteButton button12 = {16, {note(B, 2), CHANNEL_1},

NoteButton button13 = {18, {note(C, 3), CHANNEL_1},

NoteButton button14 = {19, {note(Cb, 3), CHANNEL_1},

NoteButton button15 = {20, {note(Eb, 3), CHANNEL_1},

NoteButton button16 = {21, {note(E, 3), CHANNEL_1},


void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}
