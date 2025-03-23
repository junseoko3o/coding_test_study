import { Injectable } from '@nestjs/common';

@Injectable()
export class SampleService {
  getHelloTwo(): string {
    return 'Hello World TWO!';
  }
}
