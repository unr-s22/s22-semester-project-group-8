#ifndef CODE_WAVHEADER_H
#define CODE_WAVHEADER_H

struct wav_header {
    char chunk_ID[4];
    int chunk_size;
    char format[4];

    int subchunk1_size;
    short audio_format;
    short num_channels;
    int sample_rate;
    int byte_rate;
    short block_align;
    short bits_per_sample;

    char data_header[4];
    int data_bytes;
};

#endif