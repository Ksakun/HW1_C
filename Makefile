include makefile.conf



all: $(TARGET_NAME)


$(TARGET_NAME) : $(TARGET_OBJS)
		   $(CC) $(OFLAG) $@ $^

$(TARGET_OBJS): $(TARGET_SRCS)
		  $(CC) $(CFLAG) $@ $^
clean:
	$(RM) $(TARGET_OBJS)
	$(RM) $(TARGET_NAME)

