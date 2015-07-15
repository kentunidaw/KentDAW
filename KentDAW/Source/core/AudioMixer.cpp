/*
  ==============================================================================

    AudioMixer.cpp
    Created: 11 Jul 2015 1:51:41pm
    Author:  Matt

  ==============================================================================
*/

#include "AudioMixer.h"

AudioMixer::AudioMixer() {
	inputNode = new AudioProcessorGraph::AudioGraphIOProcessor(AudioProcessorGraph::AudioGraphIOProcessor::audioInputNode);
	outputNode = new AudioProcessorGraph::AudioGraphIOProcessor(AudioProcessorGraph::AudioGraphIOProcessor::audioOutputNode);
	setPlayConfigDetails(0, 2, 44100, 512);
	addNode(inputNode);
	addNode(outputNode);
	addConnection(1, 1, 2, 1);
	prepareToPlay(44100, 512);

	trackNumber = 1;
}

AudioMixer::~AudioMixer() {
}

void AudioMixer::createProcessorFromSource(AudioTrack* source)
{
	//AudioSourceProcessor asProcessor(source, false);
	//sources.push_back(asProcessor);
	//sourceProcessors.set(trackNumber, asProcessor);
	//sources.set(trackNumber, *source);
	//addNode(&asProcessor, trackNumber); //temporary untill other functions written
	//trackNumber++;
}

void AudioMixer::addMuteControl()
{

}

void AudioMixer::addPanningControl()
{

}

void AudioMixer::addFaderControl()
{

}

void AudioMixer::addtoGraph()
{

}

void AudioMixer::removeFromGraph(uint32 trackID)
{
	removeNode(trackID);
}