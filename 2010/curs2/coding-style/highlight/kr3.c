switch (ch) {
	case 'd':
	case 'i':
		print_int(next_arg());
		break;
	case 's':
		print_string(next_arg());
		break;
	default:
		break;
}
