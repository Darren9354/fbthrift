<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Raiser
 */
interface RaiserAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * void
   *   doBland();
   */
  public function doBland(): Awaitable<void>;

  /**
   * Original thrift definition:-
   * void
   *   doRaise()
   *   throws (1: Banal b,
   *           2: Fiery f,
   *           3: Serious s);
   */
  public function doRaise(): Awaitable<void>;

  /**
   * Original thrift definition:-
   * string
   *   get200();
   */
  public function get200(): Awaitable<string>;

  /**
   * Original thrift definition:-
   * string
   *   get500()
   *   throws (1: Fiery f,
   *           2: Banal b,
   *           3: Serious s);
   */
  public function get500(): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Raiser
 */
interface RaiserIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   doBland();
   */
  public function doBland(): void;

  /**
   * Original thrift definition:-
   * void
   *   doRaise()
   *   throws (1: Banal b,
   *           2: Fiery f,
   *           3: Serious s);
   */
  public function doRaise(): void;

  /**
   * Original thrift definition:-
   * string
   *   get200();
   */
  public function get200(): string;

  /**
   * Original thrift definition:-
   * string
   *   get500()
   *   throws (1: Fiery f,
   *           2: Banal b,
   *           3: Serious s);
   */
  public function get500(): string;
}

/**
 * Original thrift service:-
 * Raiser
 */
trait RaiserClientBase {
  require extends ThriftClientBase;

  protected function sendImpl_doBland(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Raiser_doBland_args(
    );
    try {
      $this->eventHandler_->preSend('doBland', $args, $currentseqid);
      if ($this->output_ instanceof \TBinaryProtocolAccelerated)
      {
        thrift_protocol_write_binary($this->output_, 'doBland', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ instanceof \TCompactProtocolAccelerated)
      {
        thrift_protocol_write_compact($this->output_, 'doBland', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('doBland', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('doBland', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('doBland', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->sendError('doBland', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('doBland', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_doBland(?int $expectedsequenceid = null): void {
    try {
      $this->eventHandler_->preRecv('doBland', $expectedsequenceid);
      if ($this->input_ instanceof \TBinaryProtocolAccelerated) {
        $result = thrift_protocol_read_binary($this->input_, 'Raiser_doBland_result', $this->input_->isStrictRead());
      } else if ($this->input_ instanceof \TCompactProtocolAccelerated)
      {
        $result = thrift_protocol_read_compact($this->input_, 'Raiser_doBland_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(&$fname, &$mtype, &$rseqid);
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Raiser_doBland_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("doBland failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('doBland', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('doBland', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('doBland', $expectedsequenceid, $ex->result);
          return;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->recvError('doBland', $expectedsequenceid, $ex);
      throw $ex;
    }
          $this->eventHandler_->postRecv('doBland', $expectedsequenceid, null);
return;
  }

  protected function sendImpl_doRaise(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Raiser_doRaise_args(
    );
    try {
      $this->eventHandler_->preSend('doRaise', $args, $currentseqid);
      if ($this->output_ instanceof \TBinaryProtocolAccelerated)
      {
        thrift_protocol_write_binary($this->output_, 'doRaise', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ instanceof \TCompactProtocolAccelerated)
      {
        thrift_protocol_write_compact($this->output_, 'doRaise', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('doRaise', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('doRaise', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('doRaise', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->sendError('doRaise', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('doRaise', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_doRaise(?int $expectedsequenceid = null): void {
    try {
      $this->eventHandler_->preRecv('doRaise', $expectedsequenceid);
      if ($this->input_ instanceof \TBinaryProtocolAccelerated) {
        $result = thrift_protocol_read_binary($this->input_, 'Raiser_doRaise_result', $this->input_->isStrictRead());
      } else if ($this->input_ instanceof \TCompactProtocolAccelerated)
      {
        $result = thrift_protocol_read_compact($this->input_, 'Raiser_doRaise_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(&$fname, &$mtype, &$rseqid);
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Raiser_doRaise_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("doRaise failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('doRaise', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('doRaise', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('doRaise', $expectedsequenceid, $ex->result);
          return;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->recvError('doRaise', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->b !== null) {
      $x = $result->b;
      $this->eventHandler_->recvException('doRaise', $expectedsequenceid, $x);
      throw $x;
    }
    if ($result->f !== null) {
      $x = $result->f;
      $this->eventHandler_->recvException('doRaise', $expectedsequenceid, $x);
      throw $x;
    }
    if ($result->s !== null) {
      $x = $result->s;
      $this->eventHandler_->recvException('doRaise', $expectedsequenceid, $x);
      throw $x;
    }
          $this->eventHandler_->postRecv('doRaise', $expectedsequenceid, null);
return;
  }

  protected function sendImpl_get200(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Raiser_get200_args(
    );
    try {
      $this->eventHandler_->preSend('get200', $args, $currentseqid);
      if ($this->output_ instanceof \TBinaryProtocolAccelerated)
      {
        thrift_protocol_write_binary($this->output_, 'get200', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ instanceof \TCompactProtocolAccelerated)
      {
        thrift_protocol_write_compact($this->output_, 'get200', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('get200', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('get200', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('get200', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->sendError('get200', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('get200', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_get200(?int $expectedsequenceid = null): string {
    try {
      $this->eventHandler_->preRecv('get200', $expectedsequenceid);
      if ($this->input_ instanceof \TBinaryProtocolAccelerated) {
        $result = thrift_protocol_read_binary($this->input_, 'Raiser_get200_result', $this->input_->isStrictRead());
      } else if ($this->input_ instanceof \TCompactProtocolAccelerated)
      {
        $result = thrift_protocol_read_compact($this->input_, 'Raiser_get200_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(&$fname, &$mtype, &$rseqid);
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Raiser_get200_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("get200 failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('get200', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('get200', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('get200', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->recvError('get200', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('get200', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("get200 failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('get200', $expectedsequenceid, $x);
    throw $x;
  }

  protected function sendImpl_get500(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = new Raiser_get500_args(
    );
    try {
      $this->eventHandler_->preSend('get500', $args, $currentseqid);
      if ($this->output_ instanceof \TBinaryProtocolAccelerated)
      {
        thrift_protocol_write_binary($this->output_, 'get500', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ instanceof \TCompactProtocolAccelerated)
      {
        thrift_protocol_write_compact($this->output_, 'get500', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('get500', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('get500', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('get500', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->sendError('get500', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('get500', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_get500(?int $expectedsequenceid = null): string {
    try {
      $this->eventHandler_->preRecv('get500', $expectedsequenceid);
      if ($this->input_ instanceof \TBinaryProtocolAccelerated) {
        $result = thrift_protocol_read_binary($this->input_, 'Raiser_get500_result', $this->input_->isStrictRead());
      } else if ($this->input_ instanceof \TCompactProtocolAccelerated)
      {
        $result = thrift_protocol_read_compact($this->input_, 'Raiser_get500_result');
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(&$fname, &$mtype, &$rseqid);
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = new Raiser_get500_result();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("get500 failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('get500', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('get500', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('get500', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (Exception $ex) {
      $this->eventHandler_->recvError('get500', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('get500', $expectedsequenceid, $success);
      return $success;
    }
    if ($result->f !== null) {
      $x = $result->f;
      $this->eventHandler_->recvException('get500', $expectedsequenceid, $x);
      throw $x;
    }
    if ($result->b !== null) {
      $x = $result->b;
      $this->eventHandler_->recvException('get500', $expectedsequenceid, $x);
      throw $x;
    }
    if ($result->s !== null) {
      $x = $result->s;
      $this->eventHandler_->recvException('get500', $expectedsequenceid, $x);
      throw $x;
    }
    $x = new \TApplicationException("get500 failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('get500', $expectedsequenceid, $x);
    throw $x;
  }

}

class RaiserAsyncClient extends ThriftClientBase implements RaiserAsyncIf {
  use RaiserClientBase;

  /**
   * Original thrift definition:-
   * void
   *   doBland();
   */
  public async function doBland(): Awaitable<void> {
    $currentseqid = $this->sendImpl_doBland();
    await $this->asyncHandler_->genWait($currentseqid);
    $this->recvImpl_doBland($currentseqid);
  }

  /**
   * Original thrift definition:-
   * void
   *   doRaise()
   *   throws (1: Banal b,
   *           2: Fiery f,
   *           3: Serious s);
   */
  public async function doRaise(): Awaitable<void> {
    $currentseqid = $this->sendImpl_doRaise();
    await $this->asyncHandler_->genWait($currentseqid);
    $this->recvImpl_doRaise($currentseqid);
  }

  /**
   * Original thrift definition:-
   * string
   *   get200();
   */
  public async function get200(): Awaitable<string> {
    $currentseqid = $this->sendImpl_get200();
    await $this->asyncHandler_->genWait($currentseqid);
    return $this->recvImpl_get200($currentseqid);
  }

  /**
   * Original thrift definition:-
   * string
   *   get500()
   *   throws (1: Fiery f,
   *           2: Banal b,
   *           3: Serious s);
   */
  public async function get500(): Awaitable<string> {
    $currentseqid = $this->sendImpl_get500();
    await $this->asyncHandler_->genWait($currentseqid);
    return $this->recvImpl_get500($currentseqid);
  }

}

class RaiserClient extends ThriftClientBase implements RaiserIf {
  use RaiserClientBase;

  <<__Deprecated('use gen_doBland()')>>
  public function doBland(): void {
    $currentseqid = $this->sendImpl_doBland();
    $this->recvImpl_doBland($currentseqid);
  }

  /**
   * Original thrift definition:-
   * void
   *   doBland();
   */
  public async function gen_doBland(): Awaitable<void> {
    $currentseqid = $this->sendImpl_doBland();
    await $this->asyncHandler_->genWait($currentseqid);
    $this->recvImpl_doBland($currentseqid);
  }

  <<__Deprecated('use gen_doRaise()')>>
  public function doRaise(): void {
    $currentseqid = $this->sendImpl_doRaise();
    $this->recvImpl_doRaise($currentseqid);
  }

  /**
   * Original thrift definition:-
   * void
   *   doRaise()
   *   throws (1: Banal b,
   *           2: Fiery f,
   *           3: Serious s);
   */
  public async function gen_doRaise(): Awaitable<void> {
    $currentseqid = $this->sendImpl_doRaise();
    await $this->asyncHandler_->genWait($currentseqid);
    $this->recvImpl_doRaise($currentseqid);
  }

  <<__Deprecated('use gen_get200()')>>
  public function get200(): string {
    $currentseqid = $this->sendImpl_get200();
    return $this->recvImpl_get200($currentseqid);
  }

  /**
   * Original thrift definition:-
   * string
   *   get200();
   */
  public async function gen_get200(): Awaitable<string> {
    $currentseqid = $this->sendImpl_get200();
    await $this->asyncHandler_->genWait($currentseqid);
    return $this->recvImpl_get200($currentseqid);
  }

  <<__Deprecated('use gen_get500()')>>
  public function get500(): string {
    $currentseqid = $this->sendImpl_get500();
    return $this->recvImpl_get500($currentseqid);
  }

  /**
   * Original thrift definition:-
   * string
   *   get500()
   *   throws (1: Fiery f,
   *           2: Banal b,
   *           3: Serious s);
   */
  public async function gen_get500(): Awaitable<string> {
    $currentseqid = $this->sendImpl_get500();
    await $this->asyncHandler_->genWait($currentseqid);
    return $this->recvImpl_get500($currentseqid);
  }

  /* send and recv functions */
  public function send_doBland(): int {
    return $this->sendImpl_doBland();
  }
  public function recv_doBland(?int $expectedsequenceid = null): void {
    $this->recvImpl_doBland($expectedsequenceid);
  }
  public function send_doRaise(): int {
    return $this->sendImpl_doRaise();
  }
  public function recv_doRaise(?int $expectedsequenceid = null): void {
    $this->recvImpl_doRaise($expectedsequenceid);
  }
  public function send_get200(): int {
    return $this->sendImpl_get200();
  }
  public function recv_get200(?int $expectedsequenceid = null): string {
    return $this->recvImpl_get200($expectedsequenceid);
  }
  public function send_get500(): int {
    return $this->sendImpl_get500();
  }
  public function recv_get500(?int $expectedsequenceid = null): string {
    return $this->recvImpl_get500($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class Raiser_doBland_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'Raiser_doBland_args';
  }

}

class Raiser_doBland_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'Raiser_doBland_result';
  }

}

class Raiser_doRaise_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'Raiser_doRaise_args';
  }

}

class Raiser_doRaise_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'b',
      'type' => \TType::STRUCT,
      'class' => 'Banal',
      ],
    2 => dict[
      'var' => 'f',
      'type' => \TType::STRUCT,
      'class' => 'Fiery',
      ],
    3 => dict[
      'var' => 's',
      'type' => \TType::STRUCT,
      'class' => 'Serious',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'b' => 1,
    'f' => 2,
    's' => 3,
  };
  const int STRUCTURAL_ID = 1991614683033939916;
  public ?Banal $b;
  public ?Fiery $f;
  public ?Serious $s;

  public function __construct(?Banal $b = null, ?Fiery $f = null, ?Serious $s = null  ) {
  }

  public function getName(): string {
    return 'Raiser_doRaise_result';
  }

}

class Raiser_get200_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'Raiser_get200_args';
  }

}

class Raiser_get200_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    0 => dict[
      'var' => 'success',
      'type' => \TType::STRING,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'success' => 0,
  };
  const int STRUCTURAL_ID = 1365128170602685579;
  public ?string $success;

  public function __construct(?string $success = null  ) {
  }

  public function getName(): string {
    return 'Raiser_get200_result';
  }

}

class Raiser_get500_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
  };
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct(  ) {
  }

  public function getName(): string {
    return 'Raiser_get500_args';
  }

}

class Raiser_get500_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    0 => dict[
      'var' => 'success',
      'type' => \TType::STRING,
      ],
    1 => dict[
      'var' => 'f',
      'type' => \TType::STRUCT,
      'class' => 'Fiery',
      ],
    2 => dict[
      'var' => 'b',
      'type' => \TType::STRUCT,
      'class' => 'Banal',
      ],
    3 => dict[
      'var' => 's',
      'type' => \TType::STRUCT,
      'class' => 'Serious',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'success' => 0,
    'f' => 1,
    'b' => 2,
    's' => 3,
  };
  const int STRUCTURAL_ID = 6147773747560615508;
  public ?string $success;
  public ?Fiery $f;
  public ?Banal $b;
  public ?Serious $s;

  public function __construct(?string $success = null, ?Fiery $f = null, ?Banal $b = null, ?Serious $s = null  ) {
  }

  public function getName(): string {
    return 'Raiser_get500_result';
  }

}

