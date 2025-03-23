import { Controller, Get } from '@nestjs/common';
import { SampleService } from 'src/sample/sample.service';

@Controller('sample')
export class SampleController {
  constructor(private readonly sampleService: SampleService) {}

  @Get()
  helloWorld(): string {
    return this.sampleService.getHelloTwo();
  }
}
