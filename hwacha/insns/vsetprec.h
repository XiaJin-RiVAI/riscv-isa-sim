uint32_t prec = u.r.funct;
switch (prec) {
  case 16:
  case 32:
  case 64:
    WRITE_PREC(prec);
    break;

  default:
    h->take_exception(HWACHA_CAUSE_ILLEGAL_CFG, 2);
    break;
}
