; set up the loop to upload a picture every day
loop:
    ; set up a time delay
    call delay_1day

    ; set up the path to the image
    mov ah, 0Ah
    lea dx, image_path
    int 21h

    ; open the image
    mov ah, 3Dh
    mov al, 0
    int 21h

    ; read the image
    mov ah, 3Fh
    int 21h

    ; create a buffer to store the image
    mov ah, 48h
    int 21h

    ; close the image
    mov ah, 3Eh
    int 21h

    ; upload the image to Instagram
    call upload_image

    jmp loop

delay_1day:
    ; set up a 1 day delay
    mov ah, 2Ah
    mov ch, 0
    mov cl, 0
    mov dh, 23
    mov dl, 59
    int 21h
    ret

upload_image:
    ; set up the connection to Instagram
    call connect_to_instagram

    ; send the buffer with the image
    mov ah, 40h
    int 21h

    ; close the connection
    call close_connection

    ret

connect_to_instagram:
    ; set up the connection to Instagram
    mov ah, 1
    int 21h
    ret

close_connection:
    ; close the connection
    mov ah, 6
    int 21h
    ret